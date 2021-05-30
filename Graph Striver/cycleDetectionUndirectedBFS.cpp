#include<bits/stdc++.h>
using namespace std;

bool checkForCycle(int s, int V, vector<int> adj[], vector<int> &visited){
    //create a queue for bfs
    queue<pair<int,int>> q;
    visited[s] = true;
    q.push({s,-1});

    while(!q.empty()){
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto it : adj[node]){
            if(!visited[it]){
                visited[it] = true;
                q.push({it, node});
            }else if(parent != it){   // Important part
                return true;
            }
        }
    }

    return false;

}

bool isCycle(int V, vector<int> adj[]){
    vector<int> vis(V+1,0);
    for(int i=1;i<=V;i++){
        if(!vis[i]){
            if(checkForCycle(i, V, adj, vis)) return true;
        }
    }

    return false;
}