#include<iostream>
using namespace std;

int power(int a,int n){
    //base case
    if(n==1){
        return a;
    }

    return a*power(a,n-1);
}

int main(){
    int x,y;
    cin>>x>>y;

    cout<<power(x,y);


    return 0;
}