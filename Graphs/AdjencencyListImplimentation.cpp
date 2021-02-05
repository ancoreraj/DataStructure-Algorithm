#include<bits/stdc++.h>
using namespace std;

class Graph{
    //Here V is the number of vertices
    int V;
    //Array of list (*l because we dont know the size of list at compile time)
    //l is a pointer to an array in which each element of the array is a list
    list<int> *l;
    public:
    Graph(int V){
        this->V = V;
        //we give the size of the list when the size is khown
        l = new list<int>[V];
    }
    //Add an edge between x and y (bidirectional)
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void printAdjList(){
        //Iterate over all the vertices
        for(int i=0;i<V;i++){
            cout<<"Vertex "<<i<<"->";
            for(int nbr : l[i]){
                cout<<nbr<<" ";

            }
            cout<<endl;
        }
    }
};

int main(){

    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(1,2);

    g.printAdjList();
    return 0;
}