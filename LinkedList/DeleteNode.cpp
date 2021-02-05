
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data = d;
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

void deleteAtHead(node *&head){
    if(head == NULL){
        return;
    }

    node* temp =  head;
    head= head->next;
    delete temp;
    return;

}

void deleteAtTail(node*&head){

    node*temp = head;
    node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp= temp->next;
    }
    delete temp;
    prev=NULL;
    return;
}

// void deleteAtMiddle(node*&head,int p){
//     node*prev= NULL;
//     node*temp=head;
//     int jump=1;
//     while(jump<=p){
//         prev=temp;
//         temp= temp->next;
//         jump++;
//     }
//     prev->next=temp->next;
//     delete temp;
// }

int main(){

    node* head=NULL;
    insertAtHead(head,6);
    insertAtHead(head,4);
    insertAtHead(head,3);
    printNode(head);
    insertAtMiddle(head,5,2);
    insertAtTail(head,24);
    printNode(head);
    deleteAtHead(head);
    printNode(head);
    deleteAtTail(head);
    printNode(head);
    // deleteAtMiddle(head,2);
    printNode(head);


    return 0;
}



