#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,20,30,20,30,30,30,10,30};
    multiset<int> m(arr,arr+9);

    //all occurence of 20 will be erased
    m.erase(20);

    //insert
    m.insert(18);

    for(int x:m){
        cout<<x<<",";
    }
    cout<<endl;

    // cout<<m.count(10);
    // auto it = m.find(30);
    // cout<<(*it)<<endl;

    //Get all elements equal to 30
    // pair<multiset<>>m.equal_range(30);

    //lower >= and < upper bound
    for(auto it=m.lower_bound(10);it!=m.upper_bound(77);it++){
        cout<<*it<<endl;
    }

    



    return 0;
}