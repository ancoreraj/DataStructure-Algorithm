#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int prices[],int n,int span[]){

    stack <int> s; //store the indices of the days
    s.push(0);
    span[0]=1;
    
    //loop for rest of the days

    for(int i=1;i<=n;i++){
        //topmost element that is higher than current prices
        int currentPrice = prices[i];

        //pop out all the smaller elements
        while(!s.empty() && prices[s.top()]<=currentPrice){
            s.pop();
        }

        if(!s.empty()){ //this is the corner case
            int previousHighest = s.top();
            span[i]= i - previousHighest;

        }else{
            span[i] = i + 1;
        }

        //push the element back into the stack
        s.push(i);



    }
}

int main(){
    
    int prices[] = {100,80,60,70,60,75,85};
    int n = sizeof(prices)/sizeof(int);
    int span[100000] = {0};

    stockSpan(prices,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }



}