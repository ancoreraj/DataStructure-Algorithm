#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#define ll long long int

using namespace std;

int ptr=1;
int main(){
    ll t;
    cin>>t;
    while(t--){ 
        ll n;
        cin>>n;
        ll arr[300000];
        
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        ll curLen=2;
        ll maxLen=2;
        ll cd = arr[1]-arr[0];
        for(ll i=2;i<n;i++){
            
            if(cd==(arr[i]-arr[i-1])){
                curLen++;

            }else{
                cd= arr[i]-arr[i-1];
                curLen=2;
            }

            if(curLen>maxLen){
                maxLen=curLen;
            }
        }

        cout<<"Case #"<<ptr<<": "<<maxLen<<endl;
        ptr++;



    }

    
}
