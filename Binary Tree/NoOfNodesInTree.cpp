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
        right = NULL;
    }
};

//It will return the address of the root node
node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int noOfNodes(node* root){
    if(root==NULL){
        return 0;
    }

    int c1 = noOfNodes(root->left);
    int c2 = noOfNodes(root->right);

    return c1+c2+1;
}
int sumOfNodes(node* root){
    if(root==NULL){
        return 0;
    }

    int c1 = sumOfNodes(root->left);
    int c2 = sumOfNodes(root->right);

    return c1+c2+root->data;
}
int main(){
    node* root = buildTree();
    cout<<noOfNodes(root)<<endl;
    cout<<sumOfNodes(root)<<endl;



    return 0;
}