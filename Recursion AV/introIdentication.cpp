#include<bits/stdc++.h>
using namespace std;

string reverse(string s){
    if(s.length()<2){
        return s;
    }
    
    return reverse(s) + s.at(0);
}

int main(){
    

}