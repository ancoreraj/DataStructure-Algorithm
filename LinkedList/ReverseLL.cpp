#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
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

void reverse(node* &head){
    node* C = head;
    node* P = NULL;
    node* N;

    while(C!=NULL){
        //save the next node
        N=C->next;
        //make the current node point to prev
        C->next=P;
        //Update P and C and take them one step forward
        P=C;
        C=N;
    
    }
    head=P;

}

//O(n)
node* recReverseOn(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead = recReverseOn(head->next);
    node* temp = head->next;
    temp->next=head;
    head->next = NULL;
    return newHead;
}

//O(n^2)
node* recReverseOn2(node*head){
    //smallest ll
    if(head->next==NULL || head==NULL){
        return head;
    }

    //rec case
    node* smallHead = recReverseOn2(head->next);
    node* temp = smallHead;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    head->next = NULL;
    temp->next = head;
    return smallHead;
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
    // reverse(head);
    // printNode(head);
    // node* a = recReverseOn2(head);
    node* b = recReverseOn(head);
    // printNode(a);
    printNode(b);


}