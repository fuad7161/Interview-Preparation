#include <bits/stdc++.h>
using namespace std;

class number{
    protected:
    int val;
    public:
    void setval(int x){val = x;}
    virtual void show() = 0; // its a pure virtual function...
};

class hextype: public number{
    public:
    void show(){
        cout<<"Hex: "<<hex<<val<<endl;
    }
};

class dectype: public number{
    public:
    void show(){
        cout<<"Dec: "<<val<<endl;
    }
};

class octtype: public number{
    public:
    void show(){
        cout<<"Oct: "<<oct<<val<<endl;
    }
};

int main(){
    
    dectype d;
    hextype h;
    octtype o;

    d.setval(20);
    d.show();

    h.setval(20);
    h.show();

    o.setval(20);
    o.show();
    
    return 0;
}

/*
Dec: 20
Hex: 14
Oct: 24
*/