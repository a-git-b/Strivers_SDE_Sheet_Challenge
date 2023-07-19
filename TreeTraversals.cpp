#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    vector<vector<int>>ans;
    if(!root){
        return ans;
    }
    vector<int>inorder,pre,post;
    stack<pair<BinaryTreeNode<int>*,int>>s;
    s.push({root,1});
    while(!s.empty()){
        auto curr=s.top();
        s.pop();
        BinaryTreeNode<int>*node=curr.first;
        int x=curr.second;
        if(x==1){
            pre.push_back(node->data);
            x++;
            s.push({node,x});
            if(node->left){
                s.push({node->left,1});
            }
            
        }
        else if(x==2){
            inorder.push_back(node->data);
            x++;
            s.push({node,x});
            if(node->right){
                s.push({node->right,1});
            }
        }
        else{
            post.push_back(node->data);

        }

    }
    ans.push_back(inorder);
    ans.push_back(pre);
    ans.push_back(post);
    return ans;
    
}