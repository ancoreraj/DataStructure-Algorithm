#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map<T,list<T>> l;
    public:

    void addEdge(int x,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void dfs_helper(T src,map<T,bool> &visited){
        //Recursive function that will traverse the graph

        cout<<src<<" ";
        visited[src] = true; 
        //go to all nbr of that node that is not visited one by one

        //Iterate over the neighbour of that particular node
        //for all nbrs of the node/key 'src' in map 'l'
        for(T nbr: l[src]){
            if(!visited[nbr]){
                //here we are visiting the nbr with recursion
                dfs_helper(nbr,visited);
            }
        }
    }

    void dfs(T src){
        map<T,bool> visited;
        //Mark all the nodes as not visited in the Begining
        //This for each loop to iterate to all the nodes/keys of the map.
        for(auto p: l){
            T node = p.first;
            //We are initializing all the nodes/keys to not visited
            visited[node] = false;
        }
        //call the helper functiond
        dfs_helper(src,visited);
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

    g.dfs(0);


    return 0;
}