#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

void reverse(string s){
    if(s.length()==0){
        return;
    }

    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}


int main(){

    string s = "Binod";
    reverse(s);
    
     
    return 0;
}