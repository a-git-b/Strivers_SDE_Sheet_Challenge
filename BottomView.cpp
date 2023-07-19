#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>ans;
    if (!root) {
      return ans;
    }
    map<int, BinaryTreeNode<int> *> mp;
    queue<pair<BinaryTreeNode<int> *, int>> q;
    q.push({root,0});
    mp[0]=root;
    while(!q.empty()){
        auto curr=q.front().first;
        int x=q.front().second;
        q.pop();
        if(curr->left){
            mp[x-1]=curr->left;
            q.push({curr->left,x-1});
        }
        if(curr->right){
            mp[x+1]=curr->right;
            q.push({curr->right,x+1});
        }
    }
    for(auto it : mp){
        ans.push_back(it.second->data);
    }
    return ans;
}

