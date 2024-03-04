#include <iostream>
#include <queue>

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

void dfs(Tree* root){
    queue<Tree*> q;
    q.push(root);

    while(!q.empty()){
        Tree* node = q.front();
        cout<<node->val<<" ";
        q.pop();
        if(node->left!=NULL) q.push(node->left);
        if(node->right!=NULL)q.push(node->right);
    }
}

int main(){
    Tree* root = new Tree(20);

    root->left = new Tree(12);
    root->right  = new Tree(2);

    root->left->right = new Tree(9);
    root->left->left = new Tree(34);
    root->right->left = new Tree(90);
    root->right->right = new Tree(11);

    
    cout<<endl;
    cout<<endl;
    dfs(root);
    cout<<endl;
    cout<<endl;


}