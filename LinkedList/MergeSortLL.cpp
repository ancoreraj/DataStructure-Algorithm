#include<bits/stdc++.h>
using namespace std;

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

void insertAtTail(node* &head,int val){
     node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
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

node* mergeSort(node*head){
    //base
    if(head==NULL or head->next==NULL){
        return head;
    }

    //rec case
    //1. Break the Linkedlist
    node* mid = midpoint(head);
    node*a = head;
    node*b = mid->next;
    mid->next = NULL;

    //2. Rec Sort the two parts
    a = mergeSort(a);
    b = mergeSort(b);

    //3. Merge Them
    node* c = mergeTwoSortedLL(a,b);
    return c;


}

int main(){

    node*head=NULL;
    int n;
    cout<<"Enter the no of nodes:";
    cin>>n;
    while(n--){
        int d;
        cin>>d;
        insertAtTail(head,d);
    }
    printNode(head);
    node * x = mergeSort(head);
    printNode(x);



    return 0;
}