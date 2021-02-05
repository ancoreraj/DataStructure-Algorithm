#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int i,int j,vector<vector<int>> &dp){
    //base case
    if(i==s1.length() || j==s2.length()){
        return 0;
    }

    //lookup if a state if already computed
    if(dp[i][j]!=-1){
        return dp[i][j];
    }


    //rec case
    if(s1[i]==s2[j]){
        return dp[i][j] = 1 + lcs(s1,s2,i+1,j+1,dp);
    }else{
        return dp[i][j] = max(lcs(s1,s2,i+1,j,dp),lcs(s1,s2,i,j+1,dp));
    }
}

int main(){
    string s1 = "ABCD";
    string s2 = "ABEDG";

    int n1 = s1.length();
    int n2 = s2.length();

    vector<vector<int>> dp(n1, vector<int> (n2,-1));

    cout<<lcs(s1,s2,0,0,dp)<<endl;
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}