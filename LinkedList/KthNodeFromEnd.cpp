#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head=n;
}

void printNode(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<"NULL\n";
}

node* kFromEnd(node* head,int k){
    node* slow = head;
    node* fast = head;

    while(k--){
        fast=fast->next;
    }
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
int main(){
    node*head=NULL;
    int n;
    cout<<"Enter the no of nodes:";
    cin>>n;
    while(n--){
        int d;
        cin>>d;
        insertAtHead(head,d);
    }
    printNode(head);
    node* k = kFromEnd(head,2);
    cout<<k->data<<endl;

    return 0;
}