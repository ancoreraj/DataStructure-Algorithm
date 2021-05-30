#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V,vector<int> adj[]){
    vector<int> bfs; // going to store visited node
    vector<int> visited(V+1,0);

    for(int i=1;i<=V;i++){  // FOr non connected graph, as there will be no connection between the non connected components of the graph so the queue ds will not help to traverse all the nodes. Therefore we need a for loop to strictly visit all the nodes.
        if(!visited[i]){
            queue<int> q;
            q.push(i);
            visited[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);  // we have traversed that node

                for(auto it : adj[node]){  // all the adjacent node of the node "node" are visited and pushed into the queue
                    if(!visited[it]){
                        q.push(it);
                        visited[it] = 1;

                    }
                }
            }
        }
    }

    return bfs;
}



int main(){
    return 0;
}