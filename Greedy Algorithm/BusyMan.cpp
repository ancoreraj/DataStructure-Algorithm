#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//Sort the activity according to the finishing time as
//those activity which will end soon will make time for 
//more activity to be done

bool compare(pair<int,int> p1,pair<int,int> p2){
    return p1.second < p2.second;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            int s,e;
            cin>>s>>e;
            v.push_back(make_pair(s,e));
        }

        sort(v.begin(),v.end(),compare);

        //Start picking activities
        int res = 1;
        int fin = v[0].second;

        //iterate over remaining activities
        for(int i=1;i<n;i++){
            //check
            if(v[i].first >= fin){
                fin = v[i].second;
                res++;
            }
        }
        cout<<res<<endl;

        
        
    }


    return 0;
}