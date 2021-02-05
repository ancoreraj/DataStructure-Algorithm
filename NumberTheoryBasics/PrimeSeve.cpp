#include<iostream>
using namespace std;

bool isPrime(int a){
    int x=0;
    if(a==1){
        return false;
    }else{
        for(int i=2;i*i<a;i++){
            if(a%i==0){
                x=0;
                return false;
                break;
            }else{
                x=1;

            }
        }
        if(x==1){
            return true;
        }
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime\n";

    }else{
        cout<<"Not prime";
    }


    return 0;
}