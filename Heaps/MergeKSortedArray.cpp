#include<bits/stdc++.h>
using namespace std;

typedef pair<int, pair<int , int>> node;
//Node()

vector<int> mergeKSortedArray(vector<vector<int>> arr){
    vector <int> result;
    //Min Priority Queue
    priority_queue<node,vector<node>,greater<node>> pq;

    //Insert the 0th element of every array in the pq
    for(int i=0;i<arr.size();i++){
        pq.push({arr[i][0],{i,0}});
    }
    //Remove the elements one by one from the min heap and add
    //to result vector
    while(!pq.empty()){
        node current = pq.top();
        pq.pop();
        int element = current.first; //Data
        int x = current.second.first; //row in which element
        int y = current.second.second; //column in which element

        result.push_back(element);

        //you need to push to the pq the next element of current
        //element x,y+1;
        if(y+1<arr[x].size()){
            pq.push({arr[x][y+1],{x,y+1}});
        }

        
    }
    return result;
}

int main(){

    vector<vector<int>> arr{
        {2,6,12,15},
        {1,3,14,20},
        {3,5,8,10}
    };

    vector<int> output = mergeKSortedArray(arr);
    for(auto x:output){
        cout<<x<<" ";
    }


    return 0;
}