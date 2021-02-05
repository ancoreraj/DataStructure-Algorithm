#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string firstname;
    string lastname;
    string rollno;

    Student(string f,string l,string no){
        firstname = f;
        lastname = l;
        rollno = no;
    }

    bool operator==(const Student &s){
        return rollno == s.rollno;
    }

};

class HashFn{
    public:
    size_t operator()(const Student &s){
        
    }


};


int main(){

    return 0;
}