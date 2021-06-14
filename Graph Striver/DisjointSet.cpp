#include<bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[10000];
int n;
void makeSet(){
    for(int i=1;i<=n;i++){
        parent[i] = i; //Every node is parent of itself
        rank[i] = 0; //Rank of every node is initially 0
    }
}
// We go from 7 -> 6 -> 4 -> 3 In search of parent of 7
// The last return function simply saves the parent of every node before 3
int findParent(int node){
    if(node == parent[node]){
        return node;
    }
    //Path compression
    return parent[node] = findParent(parent[node]);
}

void unionNode(int u, int v){
    u = findParent(u);
    v = findParent(v);

    if(rank[u] < rank[v]){
        parent[u] = v;
    }else if(rank[v] < rank[u]){
        parent[v] = u;
    }else{
        parent[v] = u;
        rank[u]++;
        //Rank will only increase when their both ranks are same
    }

}

bool isSameComp(int node1, int node2){
    if(findParent(node1) == findParent(node2))
    return true;

    return false;
}


void main(){
    makeSet();
    int m;
    cin>>m;
    while(m--){
        int u,v;
        unionNode(u,v);

    }
}