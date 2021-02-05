#include<bits/stdc++.h>
using namespace std;

template<typename T>
class node{
    public:
    string key;
    T value;
    node<T>*next;
 
    //constructer
    node(string key,T val){
        this->key = key;
        value = val;
        next = NULL;
    }
    ~node(){
        if(next!=NULL){
            //Entire chain of the ll will be deleted
            //becuse of this distructer call 
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
    node<T> ** table; //pointer to an array of pointer
    int current_size; //How many elements i have inserted till now
    int table_size;
    //Make it a private function
    int hashFn(string key){
        int idx = 0;
        int p = 1;
        for(int j=0;j<key.length();j++){
            idx = idx + (key[j]*p)%table_size;
            idx = idx%table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }

    public:
    Hashtable(int ts=7){
        table_size = ts;
        table = new node<T>*[table_size];
        //It is the datatype of each bucket in that particular array
        //Example
        //Student *s = new student[10]; simple students
        //Student **s = new student*[10]; students pointers
        current_size = 0;
        for(int i=0;i<table_size;i++){
            table[i] = NULL;
            //Keeping a null pointer to the all the tabless
        }
    }

    void insert(string key, T value){
        
        int idx = hashFn(key);

        node<T>* n = new node<T>(key,value);
        //Insert at head of the idx linked list with id = idx 
        //Initially table[idx] = null so n points to null
        n->next = table[idx];
        table[idx] = n;
        current_size++;
        //Above 3 is very important

        //rehash
    }
    void print(){
        for(int i=0;i<table_size;i++){
            cout<<"Bucket "<<i<<" ->";
            node<T>*temp = table[i];
            while(temp!=NULL){
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
        
    }

    T search(string key){

    }

    void erase(string key){

    }


};

int main(){


    return 0;
}