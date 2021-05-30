#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDfs){
    //For node we are calling their adj nodes dfs, we first call save it(means print it) and then mark it visited
    storeDfs.push_back(node);
    vis[node] = 1;
    for(auto it : adj[node]){
        //We will cal for dfs for only that node which is not visited
        if(!vis[it]){
            //Here we are calling DFS for every adj node of that node
            dfs(it, vis, adj, storeDfs);
        }
    }
    
}

vector<int> dfsOfGraph(int V, vector<int> adj[]){
    vector<int> storeDfs;
    vector<int> vis(V+1, 0);

    for(int i=1;i<=V;i++){
        if(!vis[i]){
            dfs(i, vis, adj, storeDfs);
        }
    }

    return storeDfs;
}


int main(){



    return 0;
}