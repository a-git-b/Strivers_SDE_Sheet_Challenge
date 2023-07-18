#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    if(!root){
        return ans;
    }
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        int i=0;
        while(n--){
            auto curr=q.front();
            q.pop();
            if(i==0){
                ans.push_back(curr->data);
                i=1;
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }

        }
    }
    return ans;
}