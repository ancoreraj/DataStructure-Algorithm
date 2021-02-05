#include <bits/stdc++.h>
#define ll long long int
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

bool isSafe(int** arr, int x, int y, int n){
    //for column
    for(int row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }

    //for diagonal left
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }

    //for diagonal left
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }

    return true;

}

bool nQueen(int **arr, int x, int n){

    if(x>=n){
        return true;
    }
    //for every column in a row
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]=1;

            if(nQueen(arr,x+1,n)){
                return true;
            }

            arr[x][col]=0; //Backtracting
        }
    }

    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int ** arr = new int*[n];

    for(int i=0;i<n;i++){
        arr[i]= new int[n];
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }

    if(nQueen(arr,0,n)){
        FOR(i,0,n-1){
            FOR(j,0,n-1){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

  
    
     
    return 0;
}