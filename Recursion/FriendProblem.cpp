#include<iostream>
using namespace std;



int noOfWays(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    return noOfWays(n-1) + ((n*n-3*n+2)/2)*noOfWays(n-2);  //n-1C2
}
int main(){
    int n;
    cin>>n;
    cout<<noOfWays(n);



    return 0;
}