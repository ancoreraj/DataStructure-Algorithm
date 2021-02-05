#include<bits/stdc++.h>
using namespace std;
//wromg
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            string s;
            cin>>s>>arr[i];
        }
        sort(arr+1,arr+n+1);
        int res = 0;

        for(int i=1;i<=n;i++){
            res += abs(i-arr[i]);
        }
        cout<<res<<endl;
    }
    return 0;
}

