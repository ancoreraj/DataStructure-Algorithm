#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[6]={4,5,7,8,9,1};
    int n=6;
    sort(a,a+6);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){  //printing the subarrays from i to j;
                cout<<a[k]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}