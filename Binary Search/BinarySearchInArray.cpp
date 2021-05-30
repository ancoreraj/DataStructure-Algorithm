#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int binarySearch(int arr[] ,int n ,int key){
    int start = 0;
    int end = n-1;

    while(start<end){
        int mid = (start+end)/2;
        if(key==arr[mid]){
            return mid;

        }
        if(key<arr[mid]){
            end = mid - 1;

        }
        
        if(key>arr[mid]){
            start = mid +1;
        }

    }

    return -1;


}


int main(){
    int n;
    cin>>n;
    int arr[10000];
    for(int i=0;i<n;i++){
        arr[i] = i*2;

    }
 
    int index = binarySearch(arr,n,16);
    if(index==-1){
        cout<<"Oops";
    }else{
        cout<<index;
    }
   

    return 0;
}