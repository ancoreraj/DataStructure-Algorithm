#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

//Accepts the old root node & data and returns the new node
node* insertInBST(node* root,int data){
    //Base case
    if(root == NULL){
        return new node(data);
    }
    //Rec case - Insert in the subtree
    if(data<=root->data){
        root->left = insertInBST(root->left,data);
    }else{
        root->right = insertInBST(root->right,data);
    }

    return root;
}

node* build(){
    //Read a list of numbers till -1 and also these numbers will be inserted into BST
    int d;
    cin>>d;

    node* root = NULL;

    while(d!=-1){
        root = insertInBST(root,d);
        cin>>d;
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

bool search(node* root,int data){
    if(root==NULL){
        return false;
    }

    if(root->data == data){
        return true;
    }

    if(data<=root->data){
        return search(root->left,data);
    }else{
        return search(root->right,data);

    }

}

int main(){
    node*root = build();
    // inorder(root);
    cout<<endl;
    bfsLevel(root);

    int s;
    cin>>s;

    if(search(root,s)){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}