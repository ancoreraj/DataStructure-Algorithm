#include<iostream>
using namespace std;
void allOcc(int a[],int n,int i,int key){
    if(i==n){
        return;
    }
    if(a[i]==key){
        cout<<i<<", ";
    }
    allOcc(a,n,i+1,key);
}



int  storeOcc(int a[],int n,int i,int key,int *out,int j){
    //base case
    if(i==n){
        return j;  //returning the size of the out array
    }
    if(a[i]==key){
        //saving the indices
        out[j]=i;
        //increase j to save the occurence
        storeOcc(a,n,i+1,key,out,j+1);
    }else{

    //here j remains unchanged
    storeOcc(a,n,i+1,key,out,j);
     }
}



int main(){
    int arr[]={1,2,2,3,2};
    allOcc(arr,5,0,2);
    cout<<endl;
    int output[100];
    int k=storeOcc(arr,5,0,2,output,0);
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<output[i]<<" ";
    }




}