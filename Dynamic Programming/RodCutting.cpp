#include<bits/stdc++.h>
using namespace std;

//Didn't understand bottom up approach

//Recursive Solution top to bottom
int max_profit(int prices[], int n, int dp[]){
    //base case
    if (n<=0){
        return 0;
    }
    //lookup
    if(dp[n]!=0){
        return dp[n];
    }

    //rec case
    int ans = INT_MIN;

    for(int i=0;i<n;i++){
        int cut = i+1;
        
        int current_ans = prices[i] + max_profit(prices,n-cut,dp);

        ans = max(ans,current_ans);
    }

    return dp[n] = ans;


}

//bottom up solution
int max_profit_dp(int *prices, int n){

    int dp[n+1];
    dp[0] = 0;
    for(int len=1;len<=n;len++){
        int ans = INT_MIN;
        for(int i=0;i<len;i++){
            //we will go from the 0 to the length of the prices array to find maximum among them
            int cut = i+1;
            int current_ans = prices[i] + dp[len - cut];
            //here len - cut = len - i -1
            ans = max(current_ans,ans);

        }
        //We have now computed ans for dp[len]
        dp[len] = ans;
    }
    return dp[n];

}


int main(){

    int prices[] = {3,5,8,9,10,17,17,20};
    int n = sizeof(prices)/sizeof(int);
    int dp[100] = {0};

    cout<<max_profit(prices,n,dp)<<endl;
    cout<<max_profit_dp(prices,n)<<endl;



    return 0;
}