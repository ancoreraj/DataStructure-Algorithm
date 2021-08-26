#include<bits/stdc++.h>
using namespace std;

int minPathSum(int grid[][]) {
        int m = 3;
        int n = 3;
        
        int cost[m][n];
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                if(i == 0 && j == 0){
                    cost[i][j] = grid[i][j];
                }else if(i==0){
                    cost[i][j] = grid[i][j] + grid[i][j-1];
                }else if(j==0){
                    cost[i][j] = grid[i][j] + grid[i-1][j];
                }else{
                    cost[i][j] = grid[i][j] + min(grid[i][j-1],grid[i-1][j]);
                }
            }
        
        }
        
        return cost[m-1][n-1];
    }
int main(){
    int arr[][] = {{1,3,1},{1,5,1},{4,2,1}};

    cout<<minPathSum(arr);


}