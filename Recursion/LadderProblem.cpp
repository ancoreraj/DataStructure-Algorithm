#include<iostream>
using namespace std;

int NoOfSteps(int n){
    //base case
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    return  NoOfSteps(n-1) + NoOfSteps(n-2) + NoOfSteps(n-3);
}

int main(){

    int n;
    cin>>n;
    cout<<NoOfSteps(n);


    return 0;
}