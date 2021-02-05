#include<iostream>
using namespace std;

int multiply(int a,int b){
    if(b==1){
        return a;
    }
    return a + multiply(a,b-1);


}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<multiply(x,y);

    return 0;
}