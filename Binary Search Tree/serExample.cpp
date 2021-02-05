#include<bits/stdc++.h>
using namespace std;

int main(){

    set<pair<int,int>> s;
    s.insert(make_pair(10,1));
    s.insert(make_pair(11,1));
    s.insert(make_pair(10,3));
    s.insert(make_pair(25,1));
    s.insert(make_pair(10,24));
    s.insert(make_pair(12,4));

    for(auto p:s){
        cout<<p.first<<" and "<<p.second<<endl;
    }


    return 0;
}