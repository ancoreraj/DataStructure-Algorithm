#include<iostream>
#include<queue>
using namespace std;

//First Non Repeating Character in a Running Stream of Characters

int main(){

    queue<int> q;
    int freq[27] = {0};

    //running a stream until a '.'
    char ch;
    cin>>ch;
    while(ch!='.') {
        //logic will go here
        //insert in the q and f table

        q.push(ch);
        freq[ch-'a']++;
        //query

        while(!q.empty()){
            int idx = q.front() - 'a';
            if(freq[idx]>1){
                q.pop();
            }else{
                cout<<q.front()<<endl;
                break;
            }

        }

        //q is empty

        if(q.empty()){
            cout<<"-1"<<endl;
        }

        cin>>ch;
    }




    return 0;
}