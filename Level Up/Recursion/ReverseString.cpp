#include<bits/stdc++.h>
using namespace std;

//Identify the proper subproblem

string sum(string s,int l){
    if(l == 0){
        return "";
    }
    return s.at(l-1) + sum(s,l-1);
}

int main(){

    string s = "ankur raj is the best";
    int l = s.length();

    cout<<sum(s,l);
}