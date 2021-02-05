#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    int ans;
    ans = fib(n-1) + fib(n-2);
    return ans;
}

//Top down approach
int fibDp(int n,int dp[]){
    //Base case
    if(n==0 || n==1){
        return n;
    }
    //Recursive 
    //Look up
    if(dp[n]!=0){
        return dp[n];
    }

    int ans;
    ans = fibDp(n-1,dp) + fibDp(n-2,dp);
    return dp[n] = ans;
}

//Bottom Up Approach
int fibDpBottomUp(int n){
    int dp[100]={0};
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
//Bottom up approach
int fibSpaceOptimized(int n){
    if(n==0 or n==1){
        return n;
    }
    int first = 0;
    int second = 1;
    int res = 0;

    for(int i=2;i<=n;i++){
        res = first + second;
        first = second;
        second = res;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    // int dp[n+1] = {0};

    // cout<<fibDp(n,dp)<<endl;
    // cout<<fibDpBottomUp(n);
    cout<<fibSpaceOptimized(n);



    return 0;
}