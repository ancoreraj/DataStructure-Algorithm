#include<bits/stdc++.h>
using namespace std;



int main(){
    map<int,list<int>> m;
    m[2].push_back(300);
    m[2].push_back(400);
    m[2].push_back(500);
    m[3].push_back(52);
    m[3].push_back(14);
    for(auto pair : m){
        cout<<pair.first<<" ";
    }
    for(auto list : m[2]){
        cout<<list<<" ";
    }
    


}