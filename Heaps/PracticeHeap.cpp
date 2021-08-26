#include<bits/stdc++.h>
using namespace std;
                
//Insert
//Remove
//Read Top
//isEmpty

//Max Heap
class Heap{
    vector<int> v;
    void heapifyTopToDown(int idx){
        int n = v.size()-1;
        int leftChild = 2*idx;
        int rightChild = 2*idx + 1;
        int largest;
        //Here we are checking which element fron idx,leftchile &
        //rightchild is the largest one and move to the idxth position
        if(leftChild<=n && v[leftChild]>v[idx]){
            largest = leftChild;
        }else{
            largest = idx;
        }

        if(rightChild<=n && v[rightChild]>v[largest]){
            largest = rightChild;
        }
        
        //Means there is some change in the position
        //We will first swap the elements
        //We will again call heapify to the changed position
        if(largest != idx){
            swap(v[idx],v[largest]);
            heapifyTopToDown(largest);
        }
    }

    void heapifyBottomToTop(int idx){
        //Find its parent
        int parent = idx/2;

        if(parent > 0){
            if(v[idx]>v[parent]){
                swap(v[idx],v[parent]);
                heapifyBottomToTop(parent);
            }
        }
    }

    public:

    Heap(){
        //Block the first index
        v.push_back(-1);
    }

    void insert(int d){
        v.push_back(d);
        //Since after pushing the element to the end 
        //Initially it is not following the heap properties
        //Therefore we will heapify it
        heapifyBottomToTop(v.size()-1);
    }

    void pop(){
        //We have to remove the value/node at the top/i=1 element
        //So first we swap it with end element to move the top 
        //element to end, as removing element form end is easy/O(1);
        swap(v[1],v[v.size()-1]);

        //Now remove the end element
        v.pop_back();

        //Now as the first element is not following the
        //heap properties, we will do heapify function to it.
        heapifyTopToDown(1);
    }

    int top(){
        return v[1];
    }

    bool empty(){
        return v.size()==1;
    }



};


int main(){

    Heap h;
    h.insert(16);
    h.insert(5);
    h.insert(25);
    h.insert(2);
    h.insert(4);

    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }
    
}