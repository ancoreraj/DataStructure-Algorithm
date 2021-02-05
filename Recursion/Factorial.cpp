#include<iostream>
using namespace std;

int factorial(int a){
    //Base case
    if(a==0){
        return 1;
    }
    //Recursive case
    return a*factorial(a-1);

    //or
    // int small_ans= factorial(n-1);
    // int ans= n*small_ans;
    //return ans;
}

int main(){

    int n;
    cin>>n;
    cout<<factorial(n);

}