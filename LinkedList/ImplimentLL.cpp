#include<iostream>
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

void insertAtPPosition(node* &head,int val,int p){
    node* n = new node(val);
    
    if(head==NULL || p==0){
        insertAtHead(head,val);
    }else if(p>lengthOfNode(head)){
        insertAtTail(head,val);

    }else{
        int jump=1;
        node* temp = head;
        while(jump<p){
            temp=temp->next;
            jump++;
        }
        n->next = temp->next;
        temp->next = n;
    }
}

void removeFromHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
    return;
}

void removeFromTail(node* &head){
    node* temp = head;
    node* prev = NULL;
    while(temp->next!=NULL){
        prev = temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete temp;
    return;
    

}

void removeFromMiddle(node* &head,int p){
    
    if(head==NULL){
        return;
    }else if(p>lengthOfNode(head)){
        return;
    }else{
        int jump=1;
        
        node* temp = head;
        node* prev = NULL;
        while(jump<p){
            prev=temp;
            temp=temp->next;
            jump++;
        }
        prev->next=temp->next;
        delete temp;
        return;

    }
}

void search(node* head,int key){
    node* temp = head;
    int jump = 1;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"The Key is at :"<<jump<<endl;
        }
        jump++;
        temp=temp->next;
    }

    
}

bool searchRec(node* head,int key){
    
    if(head==NULL){
        return false;
    }


    if(head->data==key){
        return true;
    }else{
        return searchRec(head->next,key);
    }
}

// node* take_input(){
//     int d;
//     cin>>d;
//     node* head = NULL;
//     while(d!=-1){
//         insertAtTail(head,d);
//         cin>>d;
//     }
//     return head;
// }

// void inputNode(node*&head){
//     int d;
//     cin>>d;
//     while(d!=-1){
//         insertAtTail(head,d);
//         cin>>d;
//     }
// }

int main(){

    node* head = NULL;
    insertAtTail(head,1);
    printNode(head);
    insertAtTail(head,1);
    printNode(head);
    insertAtTail(head,1);
    printNode(head);



    return 0;
}