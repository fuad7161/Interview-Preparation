#include <bits/stdc++.h>
using namespace std;

class myclass{
    int i;
    public:
    myclass(int n);
    ~myclass();
    void set_i(int n){i = n;}
    int get_i(){return i;}
};
myclass::myclass(int n){
    i = n;
    cout<<"Constructing "<<i<<"\n";
}

myclass::~myclass(){
    cout<<"Destroying "<<i<<"\n";
}

void f(myclass ob);

int main(){
    
    myclass o(1);
    f(o);
    
    cout<<"This is i in main: ";
    cout<<o.get_i()<<"\n";
    return 0;
}

void f(myclass ob){
    ob.set_i(2);
    cout<<"This is local i: "<<ob.get_i()<<endl;
}

/*
Constructing 1
This is local i: 2
Destroying 2
This is i in main: 1
Destroying 1
*/