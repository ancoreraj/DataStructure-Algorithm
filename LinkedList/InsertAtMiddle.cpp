#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data= d;
        next = NULL;
    }
};

void insertAtHead(node*&head,int data){
    node* n = new node(data);
    n->next=head;
    head=n;
}

void printNode(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
     
}

int lengthOfNode(node * head){
    node* temp = head;
    int len=0;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtTail(node*&head,int data){

    if(head==NULL){
        head= new node(data);
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    node* n = new node(data);
    temp->next=n;
    return;

}

void insertAtMiddle(node*&head,int data,int p){
    //this case is the condition of insertion at node

    if(head==NULL || p==0){
        insertAtHead(head,data);

    }else if(p>lengthOfNode(head)){
        insertAtTail(head,data);
    }else{
        //First we take p-1th jump
        node* temp = head;
        int jump=1;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        //Now the transition process
        node* n = new node(data);
        n->next=temp->next;
        temp->next=n;

    }
}

int main(){

    node* head=NULL;
    insertAtHead(head,6);
    insertAtHead(head,4);
    insertAtHead(head,3);
    // printNode(head);
    insertAtMiddle(head,5,2);
    insertAtTail(head,24);
    printNode(head);
    printNode(head);


    return 0;
}

  