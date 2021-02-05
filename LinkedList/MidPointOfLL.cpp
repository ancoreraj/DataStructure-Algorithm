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

node* midpoint(node*head){
    if(head==NULL or head->next==NULL){
        return head;
    }

    node*slow = head;
    node*fast = head->next;

    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
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
    node* mid = midpoint(head);
    cout<<mid->data<<endl;




    return 0;
}