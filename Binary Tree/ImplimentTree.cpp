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

void printPr(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise print root first followed by subtrees(children)
    cout<<root->data<<" ";
    printPr(root->left);
    printPr(root->right);
}

void printIn(node*root){
    if(root==NULL){
        return;
    }
    //Otherwise Left Root Right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPo(node*root){
    if(root==NULL){
        return;
    }
    //Otherwise Left Root Right
    printPo(root->left);
    printPo(root->right);
    cout<<root->data<<" ";
    
}

void printKthLevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }

    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;

}

int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);

    return max(ls,rs) + 1; 
}
void printAllLevels(node*root){
    int H = height(root);

    for(int i=1;i<=H;i++){
        printKthLevel(root,i);
        cout<<endl;
    }
    return;

}



int main(){
    node* root = buildTree();
    printPr(root);

    return 0;
}