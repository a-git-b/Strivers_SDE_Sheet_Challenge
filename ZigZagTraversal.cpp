#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int>ans;
    if(!root){
        return ans;
    }
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    int flag=0;
    while(!q.empty()){
        int n=q.size();
        vector<int>temp(n);
        for(int i=0;i<n;i++){
            auto curr=q.front();
            q.pop();
            if(!flag){
                temp[i]=curr->data;
            }
            else{
                temp[n-i-1]=curr->data;
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        flag=!flag;
        
        ans.insert(ans.end(),temp.begin(),temp.end());
    }
    return ans;

}
