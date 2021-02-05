#include<iostream>
using namespace std;

int NoOfWays(int n){
    if(n<=3){
        return 1;
    }

    return NoOfWays(n-1)+NoOfWays(n-4);
}

int main(){

    int n;
    cin>>n;

    cout<<NoOfWays(n);


    return 0;
}