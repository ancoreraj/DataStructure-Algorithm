#include<bits/stdc++.h>
using namespace std;

class Graph{
    list<int> *l;  //Array of list
    int V;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V]; // l pointer is an array to the list that has v no linkedlist

    }

    void addEdge(int x, int y){
        //directed arrary
        l[x].push_back(y);
        l[y].push_back(x);
    }

    bool is_tree(){
        bool *visited = new bool[V];
        int *parent = new int[V];

        queue<int> q;
        
        for(int i=0;i<V;i++){
            visited[i] = false;
            parent[i] = i;
        }

        int src = 0;

        q.push(src);
        visited[src] = true;

        //pop out one node and visit its nbrs
        //We also check the parent of the nbr
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(int nbr: l[node]){
                if(visited[nbr]==true && parent[node]!=nbr){
                    return false;
                }else if(!visited[nbr]){
                    visited[nbr] = true;
                    parent[nbr] = node;
                    q.push(nbr);
                }
            }

        }
        return true;
    }

};

int main(){

    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(3,2);
    g.addEdge(1,2);
    // g.addEdge(0,3);

    cout<<g.is_tree()<<endl;
    return 0;
}