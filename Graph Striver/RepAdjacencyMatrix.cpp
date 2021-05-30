#include<bits/stdc++.h>
using namespace std;

int main(){

    //1. Adjacency Matrix
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1]; // Declare the adjacent Matrix

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v] = 1;  //Undirected Edge
        adj[v][u] = 1;  //Undirected Edge
    }
    
    return 0;
}