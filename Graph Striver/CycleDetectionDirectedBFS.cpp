#include<bits/stdc++.h>
using namespace std;

bool topoSort(int N, vector<int> adj[]){
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

    int cnt = 0;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cnt++;/// we just count the nodes, we were pushing in results
        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    //If their is not a cycle then cnt must be equal to n
    if(cnt == N) return false;

    return true;
}