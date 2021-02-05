#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>> q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int no;
        cin>>no;
        q.push(no);
    }
    int cost=0;
    

    while(q.size()!=1){
        int a = q.top();
        q.pop();
        
        int b = q.top();
        q.pop();

        int newRope = a+b;

        cost += newRope;
        q.push(newRope);

        
    }
    cout<<cost;


}