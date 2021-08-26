#include<bits/stdc++.h>
using namespace std;

//The logic here is that for every parent and child node
//structure, there are 2 nodes, a parent and 2 of their children.
//In the max heap we will put the maximum of all the three 
//to the parent position and swap it with the other node.

void max_heapify(vector<int> &arr, int i, int n){
    int leftChildIndex = 2*i;
    int rightChildIndex = 2*i + 1;
    int largest;
    
    if(leftChildIndex<=n && arr[leftChildIndex] > arr[i]){
    //Here we are checking/swaping between left and parent
        largest = leftChildIndex;
    }else{
        largest = i;
    }

    if(rightChildIndex<=n && arr[rightChildIndex] > arr[largest]){
        largest = rightChildIndex;
    }
    
    //Means if the parent node is not the largest one
    //It will also act as the base case
    if(largest != i){
        swap(arr[i],arr[largest]);
        max_heapify(arr,largest,n);
    }

}
void build_maxHeap(vector<int> &v){
    int n = v.size();
    int x = n-1; //Here x is the total no of nodes in the tree;
    for(int i=x/2;i>=1;i--){
        max_heapify(v,i,x);
    }

    //Here we are checking the 
}
int main(){
    //Convert this array to heap;
    vector<int> arr;
    for(int i=0;i<8;i++){
        int d;
        cin>>d;
        arr.push_back(d);
    }
    
    build_maxHeap(arr);
    
    for(auto x : arr){
        cout<<x<<" ";
    }
}