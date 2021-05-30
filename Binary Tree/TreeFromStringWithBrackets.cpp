#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        data = d;
        left = NULL;
        right =NULL;
    }
};

node* tree(string s){
    node* root = new node(s.at(0));

}

void preorder(node* root){
    if(root==NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){

    string s;
    cin>>s;

    node* ans = tree(s);
    preorder(ans);
    return 0;
}