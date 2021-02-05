#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int coins[]={1,2,5,10,20,50,100,200,500,2000};
    int amount;
    cout<<"Enter The Amount"<<endl;
    cin>>amount;
    
    int noOfCoins[]={0,0,0,0,0,0,0,0,0,0};
    for(int i=9;i>=0;i--){
        
        if(amount>=coins[i] ){
            
            amount=amount-coins[i];
           
            noOfCoins[i]++;
            i++;
        } 
    }
    for(int j=9;j>=0;j--){
        if(noOfCoins[j]>0){
            cout<<noOfCoins[j]<<" * "<<coins[j]<<endl;

        }
    }

}