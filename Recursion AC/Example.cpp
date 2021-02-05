#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

int firstOcc(int arr[], int n, int key, int i){

    if(i==n-1){
        return -1;
    }

    if(arr[i]!=key){
        firstOcc(arr,n,key,i+1);
    }else
        return i;
    

}


int main(){

    int arr[]= {4,2,1,2,5,2,7};
    cout<<firstOcc(arr,7,2,0);
   
    return 0;
}