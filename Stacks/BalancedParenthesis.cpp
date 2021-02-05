#include<iostream>
#include<stack>
using namespace std;

bool isValidExp(char *s){

    stack<char> stk;

    for(int i=0;s[i]!='\0';i++){
        char ch = s[i];

        if(ch=='('){
            stk.push(ch);
        }
        else if(ch==')'){
            //main function
            if(stk.empty() || stk.top()!='('){
                return false;

            }
            //else case
            stk.pop();
        }
    }

    return stk.empty();
}

int main(){
    char a[500] = "((())";
    bool z = isValidExp(a);
    if(z){
        cout<<"yes";
    }
    else{
        cout<<"NO";
    }

    return 0;
}