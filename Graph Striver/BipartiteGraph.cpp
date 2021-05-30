#include<bits/stdc++.h>
using namespace std;

bool bipartiteBfs(int src, vector<int> adj[], int color[]) {
    queue<int>q;
    q.push(src);
    color[src] = 1; 
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        
        for(auto it : adj[node]) {
            if(color[it] == -1) { //Means the node is not been coloured
                color[it] = 1 - color[node]; //Give color of opposite value of node
                q.push(it); 
            } else if(color[it] == color[node]) { //If it is coloured and it has the same color as of the node parent node then return false;
                return false; 
            }
        }
    }
    return true; 
}


bool checkBipartite(vector<int> adj[], int n) {
    int color[n];
    memset(color, -1, sizeof color); // Color array is declared with inital value of -1
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            if(!bipartiteBfs(i, adj, color)) {
                return false;
            }
        }
    }
    return true; 
}


int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for(int i = 0;i<m;i++) {
	    int u, v;
	    cin >> u >> v;
	    adj[u].push_back(v); 
	    adj[v].push_back(u); 
	}
	if(checkBipartite(adj, n)) {
	    cout << "yes"; 
	} else {
	    cout << "No"; 
	}
	return 0;
}



