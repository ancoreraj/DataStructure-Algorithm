#include<bits/stdc++.h>
using namespace std;

int NoOfWays(int n, int k){
    vector<int> dp(n+1,0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=k;i++){
        dp[i] = 2*dp[i-1];
    }
    for(int i=k+1;i<=n;i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    return dp[n];
}

int NoOfWaysRec(int n, int k, vector<int> &dp){
    if(n==0){
        return 1;
    }

    if(n<0){
        return 0; 
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans = 0;
    for(int i=1;i<=k;i++){
        ans+= NoOfWaysRec(n-i,k,dp);
    }
    return dp[n] = ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<NoOfWays(n,k);
    vector<int> dp(500,0);


    // cout<<NoOfWaysRec(n,k,dp);

}