#include<bits/stdc++.h>
using namespace std;
//Wrong Answer 
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

        map<T,int> dist;  //distance from src
        queue<T> q;  //Our queue using which we will do bfs
        
        

        //All other nodes will have infinity distance
        for(auto node_pair:l){
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);
        dist[src] = 0;

        while(!q.empty()){
            //we want to remove a node from the queue
            T node = q.front(); //The node
            q.pop();
            // cout<<node<<" ";

            for(int nbr: l[node]){
                if(dist[nbr]==INT_MAX){ //Means you are visiting the node for the first time
                    q.push(nbr);
                    //mark that nbr as visited
                    dist[nbr] = dist[node] + 1;
                }
            }
        }
        //Print the dist to every node
        for(auto node_pair:l){
            T node = node_pair.first;
            int d = dist[node];
            cout<<"Node "<<node<<" Dist from src "<<d<<endl;
        }
    }
    

};

int main(){

    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.addEdge(4,5);

    g.bfs(0);

    return 0;
}