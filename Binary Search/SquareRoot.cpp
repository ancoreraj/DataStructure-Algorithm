#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int squareRoot(int n){
    int s = 0;
    int e = n;
    int ans = -1;
    while(s<=e){
        int mid = (s+e)/2;

        

        if(mid*mid == n){
            return mid;
            
        }else if(mid*mid >n){
            e = mid - 1;
        }else{
            s = mid+1;
            ans = mid;
        }

    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<squareRoot(n);
    
    return 0;
}