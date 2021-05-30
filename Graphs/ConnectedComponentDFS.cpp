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

    void dfs(){
        map<T,bool> visited;
        //Mark all the nodes as not visited in the Begining
        //This for each loop to iterate to all the nodes/keys of the map.
        for(auto p: l){
            T node = p.first;
            //We are initializing all the nodes/keys to not visited
            visited[node] = false;
        }
        //Iterate over all the vertices and initiate a dfs call if a verted is not visited
        int cnt = 0;
        for(auto p: l){
            T node = p.first;
            
            if(!visited[node]){
                cout<<"Component "<<cnt<<" -->";
                dfs_helper(node,visited);
                cnt++;
                cout<<endl;
            }
            
        }
    }


};

int main(){
    
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,3);
    g.addEdge(0,4);
    g.addEdge(5,6);
    g.addEdge(6,7);
    g.addEdge(8,8);
    

    g.dfs();


    return 0;
}