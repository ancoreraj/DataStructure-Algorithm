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

node* sumNodes(node*root){
    if(root==NULL){
        return NULL;
    }

    node* a = sumNodes(root->left);
    node* b = sumNodes(root->right);
    node* res;
    res->data = a->data + b->data;

    return res;
}

int replaceSum(node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return root->data;
    }
    //Recursive
    int leftSum = replaceSum(root->left);
    int rightSum = replaceSum(root->right);

    int temp = root->data;
    root->data = leftSum + rightSum;
    return temp+root->data;
}

void bfs(node*root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* f = q.front();
        cout<<f->data<<", ";
        q.pop();

        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
    return;
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
    node* root = buildTree();

    bfsLevel(root);
    cout<<endl;
    replaceSum(root);
    bfsLevel(root);




    return 0;
}