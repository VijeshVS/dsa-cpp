#include <iostream>
#include <stack>

using namespace std;

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

void preorder(Tree* root){
    stack<Tree*> s;

    s.push(root);

    while(!s.empty()){
        Tree* node = s.top();
        s.pop();
        cout<<node->val<<" ";
        if(node->right!=NULL) s.push(node->right);
        if(node->left!=NULL) s.push(node->left);
    }
}

void inorder(Tree *root){
    stack<Tree*> s;

    s.push(root);

    Tree* node = root;

    while(true){
        if(node != NULL){
            s.push(node);
            node = node->left;
        }
        else{
            if(s.empty()) break;
            node = s.top();
            cout<<node->val<<" ";
            s.pop();
      
            node = node->right;
        }
    }
}


void postorder_twoStack(Tree* root){
    stack<Tree*> s;
    stack<Tree*> s1;

    s.push(root);

    while(!s.empty()){
        Tree* node = s.top();
        s.pop();
        s1.push(node);
        if(node->left!=NULL)  s.push(node->left);
        if(node->right!=NULL)   s.push(node->right);
  }
    
    while(!s1.empty()){
        Tree* node = s1.top();
        cout<<node->val<<" ";
        s1.pop();
    }

}
int main(){
    Tree* root = new Tree(20);
    root->left = new Tree(12);
    root->right  = new Tree(2);
    root->left->right  = new Tree(9);
    root->left->left = new Tree(34);
    root->right->left = new Tree(90);
    root->right->right = new Tree(11);

    cout<<endl;
    cout<<endl;
    postorder_twoStack(root);
    cout<<endl;
    cout<<endl;

}

