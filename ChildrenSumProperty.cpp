#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void changeTree(BinaryTreeNode < int > * root) {
    if(!root){
        return ;
    }
    int left=0,right=0;
    if(root->left){
        left+=root->left->data;
    }
    if(root->right){
        right+=root->right->data;
    }
    if(left+right>root->data){
        root->data=left+right;
    }
    else{
      if (root->left) {
        root->left->data = root->data;
      }
        if (root->right) {
          root->right->data = root->data;
        }
    }
    changeTree(root->left);
    changeTree(root->right);
    int sum=0;
    if(root->left)
    {
        sum+=root->left->data;
    }
    if(root->right){
        sum+=root->right->data;
    }
    if(root->right||root->left){
        root->data=sum;
    }
}  