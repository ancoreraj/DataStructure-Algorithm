#include<bits/stdc++.h>
using namespace std;

class Heap{
    vector<int> v;
    bool minHeap;
    
    //a is current element and b is the parent
    bool compare(int a,int b){
        if(minHeap){
            return a<b;
        }else{
            return a>b;
        }
    }
    void heapify(int idx){
        //min_idx will point to the smallest of  the three
        int left = 2*idx;
        int right = left+1;

        int min_idx = idx;
        int last = v.size() - 1;

        if(left <= last && compare(v[left], v[idx])){
            min_idx = left;
        }   
        if(right <= last && compare(v[right], v[min_idx])){
            min_idx = right;
        }
        //It is also the base case
        if(min_idx!=idx){
            swap(v[idx], v[min_idx]);
            heapify(min_idx);
        }
    }

    public:
    Heap(int default_size = 10,bool type=true){
        v.reserve(default_size);
        //Block the 0th index
        v.push_back(-1);
        minHeap = type;
    }

    void push(int d){
        v.push_back(d);
        int idx = v.size()-1;
        int parent = idx/2;

        //keep pushing to the top till you reach a root node
        //or stop midway because current element is already
        //small
        while(idx>1 && compare(v[idx],v[parent])){

            swap(v[idx],v[parent]);
            idx = parent;
            parent = parent/2;

        }
    }

    int top(){
        return v[1];
    }
    
    void pop(){
        int last_idx = v.size()-1;
        swap(v[1],v[last_idx]);
        v.pop_back();

        heapify(1);
    }
    bool empty(){
        return v.size() ==1;
    }

};

int main(){
    //We will use vector
    //give some initial size and type of heap

    Heap h;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        h.push(no);

    }

    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }



    return 0;
}