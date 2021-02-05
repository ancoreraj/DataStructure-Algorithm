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

//s and e is for inorder array
//Pointer variable for the preorder should be global/static
//because we are using recursion and it will backtrack
node* createTreeFromTrav(int *ino,int *preo,int s,int e){
    static int i=0;
    //it will only initialize only once
    //Base case
    if(s>e){
        return NULL;
    }
    //Rec case
    node* root = new node(preo[i]);

    //Now search for the node(root)

    int index = -1;
    //j or s
    for(int j=s;j<=e;j++){
        if(ino[j]==preo[i]){
            index = j;
            break;
        }
    }

    i++;

    root->left = createTreeFromTrav(ino,preo,s,index-1);
    root->right = createTreeFromTrav(ino,preo,index+1,e);

    return root;


}

int main(){

    int ino[] = {3,2,8,4,1,6,7,5};
    int preo[] = {1,2,3,4,8,5,6,7};
    int n = sizeof(ino)/sizeof(int);

    node* root = createTreeFromTrav(ino,preo,0,n-1);
    bfsLevel(root);



    return 0;
}