#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    //constructer
    node(int d){
        data = d;
        next = NULL;
    }

};
//& is used to passing the variable by reference
void insertAtHead(node* &head,int data){
    node* n = new node(data);
    n->next = head;
    head= n;

}



void printNode(node* head){
    node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

int main(){
    node* head = NULL;

    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    printNode(head);

    return 0;
}