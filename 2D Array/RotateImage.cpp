#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
            
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<"\n";
    }
    int x=0;
    int y=c;
    for(int u=0;u<c;u++){
        x=0;
        y--;
        for(int v=0;v<r;v++){
            cout<<a[x][y]<<" ";
            x++;
        }
        cout<<"\n";
    }
    

    return 0;
}