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
int find(TreeNode<int> *root, int x, int y){
    if(!root){
        return -1;
    }
    if(root->data==x||root->data==y){
        return root->data;
    }
    int left=find(root->left,x,y);
    
    int right=find(root->right,x,y);
    if(left==-1){
        return right;
    }
    else if(right==-1){
        return left;
    }
    else{
        return root->data;
    }

}

int lowestCommonAncestor(TreeNode<int> *root, int x, int y)
{
	int ans=find(root,x,y);
    return ans;
}