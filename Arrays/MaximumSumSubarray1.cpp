#include<iostream>
#include<algorithm>
using namespace std;
//complexity n3
int main(){
    int n;
    cin>>n;
    int a[n];
    int totalsub=0;
    int x=1;

    for(int z=0;z<n;z++,x++){
        cin>>a[z];
        totalsub+=x;
    }
    int maxsum=0;
    int currsum=0;
    int start=0;
    int end=0;
    // sort(a,a+6);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            currsum=0;
            
            for(int k=i;k<=j;k++){  //printing the subarrays from i to j;
                
                currsum+=a[k];
                
            }
            if(currsum>maxsum){
                maxsum=currsum;
                start=i;     //start and end of the max sum array
                end=j;
            }
            
        }
    }
    cout<<maxsum;
    for(int g=start;g<=end;g++){
        cout<<a[g]<<" ";
    }
   
    return 0;
}