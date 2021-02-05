#include<bits/stdc++.h>
using namespace std;

class Fun{
    public:

    void operator()(string s){
        cout<<"Having fun inside operator() "<<s;

    }


};

int main(){
    Fun f;
    f("c++");


    return 0;
}