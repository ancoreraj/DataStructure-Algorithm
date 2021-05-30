#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Graph{
    map<T,list<T>> l;
    public:

    void addEdge(T x,T y){
        l[x].push_back(y);
        // l[y].push_back(x); There is only directed node
    }

    void dfs_helper(T src,map<T,bool> &visited,list<T> &ordering){
        // cout<<src<<" ";
        visited[src] = true; 
        
        for(T nbr: l[src]){
            if(!visited[nbr]){
                dfs_helper(nbr,visited,ordering);
            }
        }

        ordering.push_front(src);
        return;
    }

    void dfs(){
        map<T,bool> visited;
        list<T> ordering;
       
        for(auto p: l){
            T node = p.first;
            
            visited[node] = false;
        }
        //Iterate over all the vertices and initiate a dfs call if a verted is not visited
        for(auto p: l){
            T node = p.first;
            
            if(!visited[node]){
                dfs_helper(node,visited,ordering);
            }
        }

        for(auto node : ordering){
            cout<<node<<endl;
        }
    }


};

int main(){
    
    Graph<string> g;
    // g.addEdge("Python","DataPre");
    // g.addEdge("Python","PyTorch");
    // g.addEdge("Python","ML");
    // g.addEdge("DataPre","ML");
    // g.addEdge("PyTorch","DL");
    // g.addEdge("ML","DL");
    // g.addEdge("DL","FaceRec");
    // g.addEdge("DataSet","FaceRec");


    g.dfs();


    return 0;
}