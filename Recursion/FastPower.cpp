#include<iostream>
using namespace std;

int fastPower(int a,int n){
    if(n==0){
        return 1;
    }
    int smallPower= fastPower(a,n/2);
    smallPower*=smallPower;

    if(n&1){  // if n is odd
        return a*smallPower;
    }
    else{
        return smallPower;
    }
    
}
int main(){

    cout<<fastPower(2,10);

    return 0;
}