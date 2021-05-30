# include<iostream>
using namespace std;
void increment(int a){
    a=a+1;
    cout<<a<<endl;
}
void passByReference(int *aptr){
    *aptr=*aptr +1;
    cout<<*aptr<<endl;
}
int main(){
    int a=10;
    //pass by value
    increment(a);
    cout<<a<<endl;
    //pass by reference
    passByReference(&a);
    cout<<a<<endl;
    
}