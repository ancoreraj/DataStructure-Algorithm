#include<iostream>
using namespace std;
int main(){
    int a[]= {1,3,5,7,10,11,12,13};
    int k;
    cin>>k;
    int i=0;
    int j=7;
    while(i<j){
        int currSum=a[i]+a[j];
        if(currSum<k){
            i++;
        }else if(currSum>k){
            j--;
        }else{
            cout<<a[i]<<" and "<<a[j];
        }
    }
    return 0;
}