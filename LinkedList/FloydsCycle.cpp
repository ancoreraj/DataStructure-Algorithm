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

bool detectCycle(node*head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            return true;
        }

    }

    return false;
}

void removeCycle(node*&head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL and fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow){
            slow = head;
            break;
        }
    }

    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    fast->next=NULL;

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
    
    // printNode(x);



    return 0;
}