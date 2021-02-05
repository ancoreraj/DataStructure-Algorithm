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

class HBPair{
    public:
    int height;
    bool balance;
};

HBPair isHeightBalanced(node*root){
    HBPair p;
    if(root==NULL){
        p.height = 0;
        p.balance = true;
        return p;
    }
    //Recursive Case
    HBPair left = isHeightBalanced(root->left);
    HBPair right = isHeightBalanced(root->right);

    p.height = max(left.height,right.height) + 1;

    if(abs(left.height-right.height)<=1 && left.balance && right.balance){
        p.balance = true;
        
    }else{
        p.balance = false;
    }

    return p;
}


int main(){
    node*root = buildTree();
    HBPair p = isHeightBalanced(root);
    if(p.balance){
        cout<<"Balanced";
    }else{
        cout<<"Not Balanced";
    }
    // cout<<p.balance<<endl;

    return 0;
}