#include<iostream>
#include<stack>
#include<queue>
#define ll long long


using namespace std;
queue<ll> modifyQueue(queue<ll> q, int k);
int main(){
    ll t;
    cin>>t;
    while(t-->0){
        ll n,k;
        cin>>n>>k;
        queue<ll> q;
        while(n-->0){
            ll a;
            cin>>a;
            q.push(a);
        }
        // queue<ll> ans=modifyQueue(q,k);
        while(!q.empty()){
            int a=q.front();
            q.pop();
            cout<<a<<" ";
        }
        cout<<endl;

    }
}

// queue<ll> modifyQueue(queue<ll> q, int k)
// {
//     stack<ll> s;
   
    
    
    
// }