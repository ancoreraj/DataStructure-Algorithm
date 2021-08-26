#include<bits/stdc++.h>
using namespace std;

int noOfWays(int n, vector<int> &v){
    //Base case
    if(n==0 || n==1){
        return 1;
    }

    if(v[n]!=0){
        return v[n];
    }

    int option1 = 0, option2 = 0, option3 = 0;

    if(n>=1){
        option1 = noOfWays(n-1,v);
    }

    if(n>=2){
        option2 = noOfWays(n-2,v);
    }

    if(n>=3){
        option3 = noOfWays(n-3,v);
    }

    return v[n] = option1 + option2 + option3;
}

int main(){

    vector<int> v(50,0);

    cout<<noOfWays(25,v);

}