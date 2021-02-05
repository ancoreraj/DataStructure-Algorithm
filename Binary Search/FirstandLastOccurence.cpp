#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int first_Occ(int arr[],int n,int key){
    int s=0;
    int e=n-1;

    int ans = -1;
    //updates in a direction that ans values gets lower and lower
    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }else if(arr[mid]>key){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }

    return ans;
}

int last_Occ(int arr[],int n,int key){
    int s=0;
    int e=n-1;

    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]==key){
            ans = mid;
            s= mid+1;
        }else if(arr[mid]>key){
            e = mid-1;
        }else {
            s = mid + 1;
        }

    }

    return ans;
}


int main(){
   int arr[] = {1,2,5,8,8,8,8,10,12};
   int n = 9;

   

   cout<<first_Occ(arr,n,8)<<" "<<last_Occ(arr,n,8);





    
   
    return 0;
}