#include<bits/stdc++.h>
using namespace std;

int winesProfit(int wines[],int i,int j,int y,int dp[][100]){
    //Base case
    if(i>j){
        return 0;
    }
    //look up
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    //Recursion case
    int op1 = wines[i]*y + winesProfit(wines,i+1,j,y+1,dp);
    int op2 = wines[j]*y + winesProfit(wines,i,j-1,y+1,dp);

    return dp[i][j] =  max(op1,op2);
}

int main(){

    int wines[] = {2,3,5,1,4};
    int dp[100][100];
    int n = 5;
    int y = 1;

    cout<<winesProfit(wines,0,n-1,y,dp);



    return 0;
}