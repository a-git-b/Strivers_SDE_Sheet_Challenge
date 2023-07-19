#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    vector<int>ans;
    if(!root){
        return ans;
    }
    map<int,TreeNode<int>*>mp;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    mp[0]=root;
    while(!q.empty()){
        auto curr=q.front().first;
        int x=q.front().second;
        q.pop();
        if(curr->left){
          q.push({curr->left, x - 1});
          if (mp.find(x - 1) == mp.end()) {
            mp[x - 1] = curr->left;
            }
        }
        if(curr->right){
          q.push({curr->right, x + 1});
          if (mp.find(x + 1) == mp.end()) {
            mp[x + 1] = curr->right;
            }
        }
    }
    
    for(auto it : mp){
        ans.push_back(it.second->val);
    }
    return ans;
}