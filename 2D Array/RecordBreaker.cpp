#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#define ll long long int
using namespace std;

int ptr=1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        int arr[n+1];
        arr[n] = -1;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        
        }

        int max = -1;
        int ans=0;


        for(int i=0;i<n;i++){
           
            if(arr[i]>max && arr[i]>arr[i+1]){
                ans++;
            }

            if(arr[i]>max){
                max=arr[i];
            }
        }

        cout<<"Case #"<<ptr<<": "<<ans<<endl;
        ptr++;

    }

    return 0;
}