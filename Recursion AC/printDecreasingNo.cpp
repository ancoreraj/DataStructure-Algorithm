#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); ++i)
using namespace std;

void dec(int n){
    if(n==0){
        return;
    }

    cout<<n<<" ";
    dec(n-1);
}
void inc(int n,int i=1){
    if(n==i){
        cout<<i<<" ";
        return;
    }

    cout<<i<<" ";
    inc(n,i+1);
}

int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);


     
    return 0;
}