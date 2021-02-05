#include<iostream>
#include<string>

using namespace std;

string words[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

void printSpelling(int n){
    //base case
    if(n==0){
        return;
    }
    printSpelling(n/10);
    int digit=n%10;
    cout<<words[digit]<<" ";
}

int main(){
    int n=2254;
    printSpelling(n);

    return 0;
}