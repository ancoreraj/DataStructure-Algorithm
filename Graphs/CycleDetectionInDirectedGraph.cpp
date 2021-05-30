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

    void addEdge(int x,int y,bool directed = true){
        l[x].push_back(y);

        if(!directed){
            l[y].push_back(x);
        }
    }

    bool cycle_helper(int node,bool *visited,bool *stack){
        //visit a node
        visited[node] = true;
        //node becomes the part of the current path
        stack[node] = true;

        for(int nbr : l[node]){
            //two cases
            if(stack[nbr]==true){
                return true;
            }
            else if(visited[nbr]==false){
                bool cycle_mila = cycle_helper(nbr,visited,stack);

                if(cycle_mila==true){
                    return true;
                }
            }
        }

        //leave a node
        stack[node] = false;

        return false;

    }

    bool contains_cycle(){
        bool *visited = new bool[V];
        bool *stach = new bool[V];
    }



};

int main(){

    return 0;
}