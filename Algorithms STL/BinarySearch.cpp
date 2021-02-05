#include<iostream>
#include<algorithm>
using namespace std;

int find(int arr[],int l,int r,int key){
    int mid=0;

    if(r>=l){
        mid= (l+(r-1)) / 2;

    

    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]>key){
        return find(arr,l,mid-1,key);

    }
    if(arr[mid]<key){
        return find(arr,mid+1,r,key);

    }
    }

    return -1;

} 

int main(){
    int arr[]={5,6,25,4,48,45};
    sort(arr,arr+6);

   int index=  find(arr,0,5,1);
   cout<<index;




    return 0;
}