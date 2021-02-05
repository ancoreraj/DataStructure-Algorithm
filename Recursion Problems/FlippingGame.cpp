#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[100];
    int iarr[100]={0};
    int t=0;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            iarr[t]++;
        }else{
            t++;
        }
    }

    int maxzero=0;

    for(int i=0;i<=t;i++){
        int a =iarr[i];
        if(a>maxzero){
            maxzero=a;
        }
    }

    int res = maxzero+t;

    if(maxzero==0){
        cout<<n;
    }else{
        cout<<res;
    }



    return 0;
    
    

}