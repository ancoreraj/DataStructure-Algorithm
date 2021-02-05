#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#define ll long long int
using namespace std;

bool canPlaceCow(int x[],int n,int c,int min_sep){


}


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        ll x[n];
        for(ll i=0;i<n;i++){
            cin>>x[i];

        }
        sort(x,x+n);

        int s = 0;
        int e = x[n-1] - x[0];

        int ans = -1;

        while(s<=e){
            int mid = (s+e)/2;

            bool cowRakhPaye = canPlaceCow(x,n,c,mid);
            
            if(cowRakhPaye){
                ans = mid;
                s=mid + 1;
            }else{
                e=mid-1;
            }
            
            


           
        }

        cout<<ans<<endl;



    }
    return 0;
}