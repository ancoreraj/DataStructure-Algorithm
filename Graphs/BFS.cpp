#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;
    //key = T(first)
    public:
    void addEdge(int x,int y){
        //Assuming it is a bidirectional 
        l[x].push_back(y); 
        l[y].push_back(x);
    }

    void bfs(T src){

        map<T,int> visited;  //Visited check
        queue<T> q;  //Our queue using which we will do bfs
        
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            //we want to remove a node from the queue
            T node = q.front(); //The node
            q.pop();
            cout<<node<<" ";

            for(int nbr: l[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    //mark that nbr as visited
                    visited[nbr] = true;
                }
            }
        }
    }
    

};

int main(){

    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.bfs(0);

    return 0;
}