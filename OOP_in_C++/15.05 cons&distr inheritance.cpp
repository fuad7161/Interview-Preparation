#include <bits/stdc++.h>
using namespace std;

class base1{
    public:
    base1(){cout<<"Constructing base1."<<endl;}
    ~base1(){cout<<"Destructing base1."<<endl;}
};

class base2{
    public:
    base2(){cout<<"Constructing base2."<<endl;}
    ~base2(){cout<<"Destructing base2."<<endl;}
};

class derived: public base1 , public base2{
    public:
    derived(){cout<<"Construting derived."<<endl;}
    ~derived(){cout<<"Destructing derived."<<endl;}
};

int main(){
    
    derived ob;
    
    return 0;
}

/*
Constructing base1.
Constructing base2.
Construting derived.
Destructing derived.
Destructing base2.
Destructing base1.
*/