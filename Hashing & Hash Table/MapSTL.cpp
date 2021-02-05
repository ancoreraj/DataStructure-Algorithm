#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,int> m;
    //map<key,value>

    // 1. Insert
    m.insert(make_pair("Mango",100)); //it takes a pair as an argument

    pair<string,int> p;
    p.first = "Apple";
    p.second = 120;

    m.insert(p);

    m["Banana"] = 20;

    //2. Search
    string fruit;
    cin>>fruit;

    auto it = m.find(fruit); //It will return an iterater to the fruit node
    if(it!=m.end()){
        cout<<"Price is "<<fruit<<" is "<<m[fruit]<<endl;
    }else{
        cout<<"Fruit is not available\n";
    }

    //another way to find a particular map
    //it stores unique keys only once
    //it will update the value to the key
    if(m.count(fruit)){
        cout<<m[fruit]<<endl;
    }else{
        cout<<"Not found\n";
    }

    //3. Erase
    // m.erase(fruit);

    m["Litchi"] = 60;
    m["Pineapple"] = 80;

    //Iterate over all the key value pairs
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" and "<<it->second<<endl;
    }

    //for each loop
    for(auto p:m){
        cout<<p.first<<" : "<<p.second<<endl;
    }





}