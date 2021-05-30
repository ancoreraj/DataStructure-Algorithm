#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        
        int i = m;
        int j = 0;
        while(i>=0 && j>=0){
            if(grid[i][j]<0){
                ans += (n-j);
                i--;
            }else{
                j++;
            }
        }
        
        return ans;
        
    }

int main(){

}