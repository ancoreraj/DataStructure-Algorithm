#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentSum=0;
    int maximumSum=0;
    for(int j=0;j<n;j++){
        currentSum+=a[j];

        if(currentSum<0){
            currentSum=0;
        }

        if(currentSum>maximumSum){
            maximumSum=currentSum;
        }
    }

    cout<<maximumSum;

    return 0;
}