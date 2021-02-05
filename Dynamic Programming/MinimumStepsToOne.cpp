#include<bits/stdc++.h>
#define ll long long int
using namespace std;

//Top Down approach
int Steps(int n,int dp[]){
    if(n==1){
        return 0;
    }

    if(dp[n]!=0){
        return dp[n];
    }

    //Rec case
    int op1,op2,op3;
    op1 = op2 = op3 = INT_MAX;
    if(n%3 == 0){
        op1 = Steps(n/3,dp) + 1;
    }
    if(n%2==0){
        op2 = Steps(n/2,dp) + 1;

    }
    op3 = Steps(n-1,dp) + 1;

    int ans = min(op1,min(op2,op3));
    return dp[n] = ans;
}

// Bottom Up approach
int minSteps(int n){
    int dp[20000009]={0};
    dp[1] = 0;

    for(int i=2;i<=n;i++){
        int op1,op2,op3;
        op1 = op2 = op3 = INT_MAX;
        
        if(n%3 == 0){
            op1 = dp[i/3];
        }
        if(n%2==0){
            op2 = dp[i/2];
        }
        op3 = dp[i-1];

        dp[i] = min(min(op1,op2),op3) + 1;

    }

    return dp[n];
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    // int dp[20000009] = {0};

    cout<<minSteps(n)<<endl;

    }

    
    

    return 0;
}