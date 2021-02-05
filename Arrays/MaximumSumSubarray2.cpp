#include<iostream>
#include<algorithm>
using namespace std;
//complexity n2
int main(){
    int n;
    cin>>n;
    int a[100];
    int csum[100];
    cin>>a[0];
    csum[0]=a[0];
    for(int z=1;z<n;z++){
        cin>>a[z];
        csum[z]= csum[z-1] + a[z];
        
    }
    int maxsum=0;
    int currsum=0;
    int start=0;
    int end=0;
    // sort(a,a+6);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            
            currsum=csum[j] - csum[i-1];
            
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