#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[500]="Ankur raj is a good boy";

    char *ptr= strtok(s," ");
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
    

}