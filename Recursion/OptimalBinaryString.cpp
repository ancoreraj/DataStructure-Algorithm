#include<iostream>
using namespace std;

int NoOfString(int n){
    if(n==2){
        return 3;
    }
    if(n==1){
        return 2;
    }
    if(n==0){
        return 0;
    }

    return NoOfString(n-1) + NoOfString(n-2);
}

int main(){

    int n;
    cin>>n;

    cout<<NoOfString(n);
    
    return 0;
}