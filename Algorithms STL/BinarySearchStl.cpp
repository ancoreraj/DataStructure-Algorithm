#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[]={10,20,30,40,50,100,1100};
    int n=sizeof(arr)/sizeof(int);
    //for sorted array
    int key;
    cin>>key;
    bool present= binary_search(arr,arr+n,key);
    if(present){
        cout<<"Present";
    }else{
        cout<<"Absent";
    }

    return 0;
}