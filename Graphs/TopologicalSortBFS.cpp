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
    }

    void topological_sort(){
        //An array of indegree
        int *indegree = new int[V];
        //initializing each list with 0 indegree
        for(int i=0;i<V;i++){
            indegree[i] = 0;
        }
        //Update indegree by traversing edges x->y
        //indegree[y] ++

        for(int i=0;i<V;i++){
            for(auto y : l[i]){ //all the elements in the ith linkedlist
                indegree[y]++;
            }

        }

        //bfs
        queue<int> q;
        //1. step find nodes with 0 indegree initially
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        //Start removing elements from the queue
        while(!q.empty()){
            int node = q.front();
            cout<<node<<" ";
            q.pop();
            //Iterate over nbrs of that node and reduce their degree
            for(auto nbr : l[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
    }

};

int main(){

    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,4);
    g.addEdge(4,5);
    g.addEdge(3,5);
    g.addEdge(2,5);
    g.addEdge(2,3);

    g.topological_sort();



    return 0;
}