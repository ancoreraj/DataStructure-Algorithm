#include<iostream>
using namespace std;

int main(){
    //We have to find a unique number which only occurs once
    //In this we will only do XOR of all numbers, the number which will left will be the result
    int n;
    cin>>n;
    int no;
    int ans=0;
    //BitWise XOR operator
    for(int i=0;i<n;i++){
        cin>>no;
        ans=ans^no;
    }
    cout<<ans;

    return 0;
}