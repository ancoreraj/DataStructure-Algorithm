#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Info{
    public:
    int size;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info largestBSTinBT(Node* root){
    if(root == NULL){
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(!root->left && !root->right){
        return {1,root->data,root->data,1,true};
    }

    Info leftInfo = largestBSTinBT(root->left);
    Info rightInfo = largestBSTinBT(root->right);

    Info curr;
    curr.size = leftInfo.size + rightInfo.size + 1;
    
    if(leftInfo.isBST && rightInfo.isBST && leftInfo.max < root->data && rightInfo.min >root->data){
        curr.min = min(leftInfo.min,min(rightInfo.min,root->data));
        curr.max = max(leftInfo.max,max(rightInfo.max,root->data));

        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    curr.ans = max(leftInfo.ans, rightInfo.ans);
    curr.isBST = false;
    return curr;
}

int main(){

}