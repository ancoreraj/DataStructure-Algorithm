#include<iostream>
using namespace std;
void dec(int a){
    if(a==1){
        cout<<a;
    }  
        cout<<a<<" ";
        dec(a-1);
    


}
void inc(int b){
    if(b==0){
        return;
    }
    inc(b-1);
    cout<<b<<" ";

}
int main(){
    int n;
    cin>>n;
    dec(n);
    cout<<endl;
    inc(n);
    

    return 0;
}