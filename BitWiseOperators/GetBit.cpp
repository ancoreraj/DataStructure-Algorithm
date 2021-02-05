#include <iostream>
using namespace std;

int getBit(int n, int pos){
    int x = n & (1<<pos);
    if(x!=0){
        return 1;
    }else{
        return 0;
    }
} 

int setBit(int n, int pos){
    int x = n | (1<<pos);
    return x;

}

int unsetBit(int n, int pos){
    int x = n & ~(1<<pos);
    return x;
}

int main(){
    cout<<getBit(5,2);

    return 0;
}