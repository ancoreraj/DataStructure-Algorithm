#include<bits/stdc++.h>
using namespace std;

vector<int> topoSort(int N, vector<int> adj[]){
    queue<int> q;
    vector<int> indegree(N, 0);
    //Storing the indegree of all the nodes
    for(int i=0;i<N;i++){  
        for(auto it : adj[i]){
            indegree[it]++;
        }
    }

    //Storing all the nodes with indegree 0;
    for(int i=0;i<N;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    //
    vector<int> topo;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }

    return topo;
}