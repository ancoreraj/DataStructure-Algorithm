#include<iostream>
using namespace std;

void unique(int arr[], int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum= xorSum^arr[i];
        cout<<xorSum<<endl;
    }

}

int main(){

    int arr[] = {1,2,3,4,1,2,3};
    unique(arr,7);



    




    return 0;
}