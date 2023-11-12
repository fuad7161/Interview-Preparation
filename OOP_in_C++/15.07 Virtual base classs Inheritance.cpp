#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    int i;
};

class derived1: public base{
    public:
    int j;
};

class derived2: public base{
    public:
    int k;
};

class derived3: public derived1 , public derived2{
    public:
    int sum;
};

int main(){
    
    derived3 ob;

    // ob.i is ambigous because ob.i is comming from derived1 and derived2 so it is ambigous.
    ob.derived1::i = 10;

    ob.j = 20;
    ob.k = 30;

    ob.sum = ob.derived1::i + ob.j + ob.k;

    cout<<ob.derived1::i<<" ";
    cout<<ob.j<<" "<<ob.k<<" ";
    cout<<ob.sum<<endl;
    
    return 0;
}