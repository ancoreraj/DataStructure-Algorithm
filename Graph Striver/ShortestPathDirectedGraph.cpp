#include<bits/stdc++.h>
using namespace std;

void BFS(vector<int> adj[], int N, int src){
    int dist[N]={INT_MAX};

    queue<int> q;

    dist[src]=0;
    q.push(src);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it : adj[node]){
            //main function is this
            if(dist[node] + 1 < dist[it]){
                dist[it] = dist[node] + 1;
                q.push(it);
            }
        }
    }

    for(int i=0;i<N;i++){
        cout<<dist[i]<<" ";
    }
}