#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    base(){cout<<"Constructing base."<<endl;}
    ~base(){cout<<"Destructing base."<<endl;}
};

class derived: public base{
    public:
    derived(){cout<<"Construting derived."<<endl;}
    ~derived(){cout<<"Destructing derived."<<endl;}
};

int main(){
    
    derived ob;
    
    return 0;
}

/*
Constructing base.
Construting derived.
Destructing derived.
Destructing base.
*/