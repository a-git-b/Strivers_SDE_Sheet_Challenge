/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/
bool check(BinaryTreeNode<int>* left,BinaryTreeNode<int>* right){
    if(!left||!right){
        return left==right;
    }
    if(left->data!=right->data){
        return false;
    }
    return check(left->left,right->right)&&check(left->right,right->left);
}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    if(!root){
        return true;
    }
    return check(root->left,root->right);
   
}