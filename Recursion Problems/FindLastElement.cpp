#include <iostream>
using namespace std;

int function(int arr[], int i,int n,int m){
    if(arr[i]==m){
        return n-i;
    }

    if(i==n-1){
        return -1;
    }

    return function(arr,i+1,n,m);

}

int main(){
    int n;
    cin>>n;

    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;

    cout<<function(arr,0,n,m);

    return 0;
}