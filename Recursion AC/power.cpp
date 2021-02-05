#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;

    }


    return n*power(n,p-1);
}


int main(){
    int n,p;
    cout<<"Type n and p";
    cin>>n>>p;

    cout<<power(n,p);

     
    return 0;
}