#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#define ll long long int
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[10000];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curr_max=arr[0];
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++){
        if(arr[i]>curr_max){
            curr_max=arr[i];
        }
        cout<<curr_max<<" ";

    }


}