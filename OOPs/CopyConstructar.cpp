#include<iostream>
using namespace std;

class Car{
    private:
    string name;
    int modelno;
    int price;

    public:
    Car(int p,int m,string n){
        name=n;
        modelno=m;
        price=p;
    }

    void print(){
        cout<<name<<endl;
        cout<<modelno<<endl;
        cout<<price<<endl;

    }
};

int main(){
    Car C(5000,110,"BMW");

    C.print();
    //copy constructar is default in the system
    //copy cons
    Car D(C);
    D.print();



}