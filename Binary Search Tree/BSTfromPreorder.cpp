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

node* insertInBst(node*root,int data){

    if(root == NULL){
        return new node(data);
    }

    if(data<root->data){
        root->left = insertInBst(root->left,data);
    }else{
        root->right = insertInBst(root->right,data);
    }

    return root;

}

void bfsLevel(node*root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();

            //This conditon for the endings
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<f->data<<", ";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}



int main(){

    int arr[] = {10,5,1,7,40,50};

    node* root = new node(arr[0]);


    for(int i=1;i<6;i++){
        root = insertInBst(root,arr[i]);

    }

    bfsLevel(root);
    


    return 0;
}