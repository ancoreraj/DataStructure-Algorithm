#include<bits/stdc++.h>
using namespace std;

int power(int x, int y)
{
     
    // Initialize answer
    int res = 1;
     
    // Check till the number becomes zero
    while (y)
    {
         
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
             
        // y = y/2
        y = y >> 1;
         
        // Change x to x^2
        x = (x * x);
    }
    return res;
}
int main(){

    int arr[] = {5, 3, 0, 7, 4};
    int n = 5;
    sort(arr,arr+n);
        int n1 = 0;
        int n2 = 0;
        
        int ten21 = n/2;
        int ten11 = n - ten21;
        int ten1 = power(10,ten11-1);
        int ten2 = power(10,ten21-1);
        for(int i=0;i<n;i++){
            if(i%2==0){
                n1 += (arr[i]*ten1);
                ten1/=10;
                

            }else{
                n2 += (arr[i]*ten2);
                ten2/=10;
                
            }
        }

        cout<<to_string(n1+n2);
}