#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

int Sum(int n){
    //base
    if(n==0){
        return 0;
    }

    //recursive
    return n + Sum(n-1);

}


int main(){

    cout<<Sum(8);
    
    return 0;
}