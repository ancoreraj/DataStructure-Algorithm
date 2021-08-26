#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    priority_queue <int> pq;  //max heap
    priority_queue <int,vector<int>,greater<int>> q; //min heap
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int no;
        cin>>no;
        q.push(no); //O(logN)
    }

    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    return 0;
}