#include<iostream>
using namespace std;
int firstIndex(int arr[],int n,int k){
    if(n==0){
        return -1;
    }
    if(arr[0]==k){
        return 0;
    }
    int i= firstIndex(arr+1,n-1,k);
    //important Line
    if(i==-1){
        return -1;
    }
    else{
        return i+1;
    }
}
int lastOccurence(int arr[],int n,int k){
    if(n==0){
        return -1;
    }
    if(arr[n]==k){
        return 0;
    }
    int i= lastOccurence(arr+1,n-1,k);
    //important Line
    if(i==-1){
        return -1;
    }
    else{
        return i+1;
    }
}

int main(){
    int arr[]={2,8,6,5,2,8};
    int n= sizeof(arr)/sizeof(int);
    int key=8;
    cout<<"Index is "<<lastOccurence(arr,n,key);

    return 0;
}