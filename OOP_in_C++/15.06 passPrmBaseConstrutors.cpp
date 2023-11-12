#include <bits/stdc++.h>
using namespace std;

class base{
    protected:
    int i;
    public:
    base(int x){i = x;cout<<"Constructing base."<<endl;}
    ~base(){cout<<"Destructing base"<<endl;}
};

class derived:public base{
    int j;
    public:
    derived(int x,int y):base(y){j = x ; cout<<"Constructing Derived"<<endl;}
    ~derived(){cout<<"Desructing derived"<<endl;}
    void show(){cout<<i<<" "<<j<<endl;}
};

int main(){
    
    derived ob(2,3);
    ob.show();
    return 0;
}

/*
Constructing base.
Constructing Derived
3 2
Desructing derived
Destructing base
*/