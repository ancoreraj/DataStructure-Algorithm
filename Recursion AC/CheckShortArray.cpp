#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

bool checkShortArray(int arr[],int n){
    //base case

    if(n==1){
        return true;
    }
    


    bool restArray = checkShortArray(arr+1,n-1);

    return (arr[0]<arr[1] && restArray);
}

bool isSorted(int arr[],int i,int n){

    if(i==n-1){
        return true;
    }


    if(arr[i]<arr[i+1] && isSorted(arr,i+1,n))
    return true;
    else
    return false;
}


int main(){
    int arr[] = {1,2,3,4,26,5};

    cout<<isSorted(arr,0,6);
    
     
    return 0;
}