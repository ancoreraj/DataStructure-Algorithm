#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int currSum = 0;
    int maxSum = 0;

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum = 0;
        }

        maxSum = max(currSum,maxSum);
    }
    return maxSum;
}

int main(){

    int arr[] = {-3,2,5,-1,6,3,-2,7,-5,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<maxSum(arr,n)<<endl;


    return 0;
}