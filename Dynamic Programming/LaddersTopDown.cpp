#include<bits/stdc++.h>
using namespace std;

//Top to bottom
int noOfWays(int n,int k,int dp[]){
    if(n==0){
        //one way to stand on the ground
        return 1;
    }
    //LookUp
    if(dp[n]!=0){
        return dp[n];
    }


    //rec case
    int ways = 0;
    for(int i=1;i<=k;i++){
        if(n-i>=0){
            //we dont want to call on the negative state
            ways += noOfWays(n-i,k,dp);
        }
    }
    return dp[n] = ways;

}

//Bottom to top
int LadderNoOfWays(int n,int k){
    int dp[100] = {0};

    dp[0] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = 0;
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i]+=dp[i-j];
            }
            
        }
    }

    //See the bottom up
    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
     

    return dp[n];
}

//optimised
int ladder_optimized(int n,int k){
    int dp[100] = {0};
    //base as for step 1 and 2 result is 1
    dp[0] = dp[1] = 1;

    //Until k as i-k>0
    for(int i=2;i<=k;i++){
        dp[i] = 2*dp[i-1];
    }

    //for remaining part
    for(int i=k+1;i<=n;i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    for(int i=0;i<=n;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;

    return dp[n];
}


int main(){
    int n,k;
    int dp[100]={0};
    cin>>n>>k;
    cout<<noOfWays(n,k,dp)<<endl;
    cout<<LadderNoOfWays(n,k)<<endl;
    cout<<ladder_optimized(n,k)<<endl;



    return 0;
}