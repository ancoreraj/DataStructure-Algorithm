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

node* deleteInBST(node*root,int data){
    if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left = deleteInBST(root->left,data);
        return root;
    }
    else if(data==root->data){
        //Found the node we want to delete, 3 Cases
        //1. Node with 0 children - Leaf Node
        if(root->left==NULL && root->right==NULL){
            delete root;
            //the null will attach to the parent
            return NULL;          
        }
        //2. Case only 1 child
        if(root->left!=NULL && root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->right!=NULL && root->left==NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        //3. Case 2 children

        node *replace = root->right;
        //Find the inorder succeser from the right subtree

        while(replace->left!=NULL){
            replace = replace->left;
        }

        root->data = replace->data;
        //Call for deletion for right subtree
        //Right side of the node will point to subtree which
        //does not contain that replacement node
        root->right = deleteInBST(root->right,replace->data);
        return root;

    }
    else{
        root->right = deleteInBST(root->right,data);
        return root;
    }
}

int main(){
    node* root = build();
    // inorder(root);
    cout<<endl;
    bfsLevel(root);

    int s;
    cin>>s;
    root = deleteInBST(root,s);
    bfsLevel(root);


    return 0;
}