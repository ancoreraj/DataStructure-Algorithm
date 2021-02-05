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

node* mergeTwoSortedLL(node* a,node* b){
    //base case
    if(a==NULL){
        return b;
    }
    if(b==NULL){
        return a;
    }

    node*c;
    
    if(a->data < b->data){
        c=a;
        c->next = mergeTwoSortedLL(a->next,b);
    }else{
        c=b;
        c->next= mergeTwoSortedLL(a,b->next);
    }

    return c;

}

int main(){
    node*head1=NULL;
    node*head2=NULL;
    int a,b;
    cout<<"Enter size of LL 1:";
    cin>>a;
    cout<<"Enter size of LL 2:";
    cin>>b;
    while(a--){
        int d;
        cin>>d;
        insertAtHead(head1,d);
    }
    while(b--){
        int d;
        cin>>d;
        insertAtHead(head2,d);
    }
    printNode(head1);
    printNode(head2);
    node* x = mergeTwoSortedLL(head1,head2);
    printNode(x);
    

    return 0;
}