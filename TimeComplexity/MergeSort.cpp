#include<iostream>
using namespace std;

void Merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    int temp[100];
    while(i<=mid && j<=e){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }else{
            temp[k++]=a[j++];
        }
    }

    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }

    //Now we have to copy all the elements to the original array
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }


}

void MergeSort(int a[],int s,int e){
    //Base Case
    if(s>=e){
        return;
    }
    //Now Follow 3 steps
    //1st Divide the array
    int mid=(s+e)/2;

   
    MergeSort(a,s,mid);
    MergeSort(a,mid+1,e);

     //2nd sort and the divided array
    Merge(a,s,e);

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    MergeSort(arr,0,n-1);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";

    }


    return 0;
}