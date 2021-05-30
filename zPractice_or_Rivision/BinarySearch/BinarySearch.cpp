#include<bits/stdc++.h>
using namespace std;
//In a sorted array
int BinarySearch(vector<int> v,int n,int key){
    int start = 0;
    int end = n-1;
    
    while(start<end){
        int mid = (start+end)/2;

        if(key==v[mid]){
            return mid;
        }

        if(key<v[mid]){
            end = mid-1;
        }

        if(key>v[mid]){
            start = mid+1;
        }

    }
    return -1;
}

int main(){

}