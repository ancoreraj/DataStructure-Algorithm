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

int lengthOfNode(node* head){
    node* temp = head;
    int length=0;
    while(temp->next!=NULL){
        length++;
        temp=temp->next;

    }

    return length;
}

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

void insert(node*&head,int data){
    node* n = new node(data);
    node* temp = head;

    n->next = head;
    if(temp!=NULL){

        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = n;
    }else{
        //For only one node ,it will point to itself
        n->next = n;
    }
    head = n;
}

void print(node*head){
    node* temp = head;
    while(temp->next!=head){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    cout<<temp->data<<endl;
    return;
}

node* getnode(node*head,int data){

    node* temp = head;
    //for all nodes except last node
    while(temp->next!=NULL){
        if(temp->data == data){
            return temp;
        }
        //last node
        temp = temp->next;
    }
    //out of the loop
    if(temp->data == data){
        return temp;
    }

    return NULL;

}

void deleteNode(node *&head, int data){
    node* del = getnode(head,data);
    if(del==NULL){
        return;
    }
    //otherwise

    //for head delete
    if(head==del){
        head = head->next;
    }

    //for rest delete
    node*temp = head;
    //stop one step behind the node to be deleted
    while(temp->next!=del){
        temp= temp->next;
    }
    temp->next=del->next;
}

int main(){

    node* head = NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,30);
    insert(head,30);
    print(head);
    deleteNode(head,20);
    print(head);
    deleteNode(head,10);
    print(head);


    return 0;
}