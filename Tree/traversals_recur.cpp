#include <iostream>

using namespace std;
#include <stack>

struct Tree{
    int val;
    Tree* left;
    Tree* right;

    Tree(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};


// Traversal of binary tree using recursion
void preorder_recur(Tree* root){
    if(root==NULL){
        return;
    }

    cout<<root->val<<" ";
    preorder_recur(root->left);
    preorder_recur(root->right);
}

void inorder_recur(Tree* root){
    if(root == NULL){
        return;
    }

    inorder_recur(root->left);
    cout<<root->val<<" ";
    inorder_recur(root->right);
}

void postorder_recur(Tree* root){
    if(root == NULL){
        return;
    }

    postorder_recur(root->left);
    postorder_recur(root->right);
    cout<<root->val<<" ";
}


int main(){
    Tree* root = new Tree(20);

    root->left = new Tree(12);
    root->right  = new Tree(2);

    root->left->right = new Tree(9);
    root->left->left = new Tree(34);
    root->right->left = new Tree(90);
    root->right->right = new Tree(11);

   
}
