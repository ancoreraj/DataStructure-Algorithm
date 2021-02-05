#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){
    int arr[] = {10,11,20,9,8,11,10};
    int n = sizeof(arr)/sizeof(int);

    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    s.erase(10);
    auto it = s.find(11);
    s.erase(it);

    for(set<int>::iterator it = s.begin();it!=s.end();it++){
        cout<<*(it)<<",";
    }

    return 0;
}