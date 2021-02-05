#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int find(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[s]<=arr[mid]){
            //here 1st part of the line
            //2 cases -> element lies on the left or the right of mid

            if(key>=arr[s] && key<=arr[mid]){
                e = mid - 1;
            }else{
                s= mid + 1;
            }

        }else{
            //2nd part of the line
            if(key>=arr[s] && key<=arr[mid]){
                s = mid + 1;


            }else{
                e = mid - 1;
            }

        }
    }

    return -1;
}


int main(){
    int n;
    cin>>n;
    int arr[100000];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int key;
    cin>>key;
    return 0;
}