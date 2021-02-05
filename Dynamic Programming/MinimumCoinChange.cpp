#include<bits/stdc++.h>
using namespace std;

//Top to bottom
int minimumCoinChange(int coins[],int size,int amount,int dp[]){
    if(amount == 0){
        return 0;
    }
    //Lookup
    if(dp[amount]!=0){
        return dp[amount];
    }

    //Rec case
    int ans = INT_MAX;
    for(int i=0;i<size;i++){
        if(amount-coins[i]>=0){
            //Main Function
            int subprob = minimumCoinChange(coins,size,amount-coins[i],dp) + 1;

            ans = min(ans,subprob);
        }
        
    }
    dp[amount] = ans;
    return dp[amount];

}




int main(){

    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int coins[n];
        for(int i=0;i<n;i++){
            cin>>coins[i];
        }
        sort(coins,coins+n);
        if(x<coins[0]){
            cout<<"No solution\n";
        }else{
            int dp[100000];
        
            cout<<minimumCoinChange(coins,n,x,dp)<<endl;
        }
        

    }
    
    // int amount = 15;
    // int coins[] = {1,7,10};
    // int dp[100] = {0};
    // int size = sizeof(coins)/sizeof(int);

    // cout<<minimumCoinChange(coins,size,amount,dp)<<endl;

    
    return 0;
}