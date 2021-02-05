#include<iostream>
using namespace std;
bool isSorted(int a[],int n){
    //base
    if(n==0 or n==1){
        return true;
    }
    //recursive case
    if(a[0]<a[1] and isSorted(a + 1,n-1)){
        return true;

    }else{
        return false;
    }

}

int main(){
    int arr[]={1,2,3,14,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<isSorted(arr,n);


    return 0;
}