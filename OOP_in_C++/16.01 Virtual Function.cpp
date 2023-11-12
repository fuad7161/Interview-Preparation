#include <bits/stdc++.h>
using namespace std;

class base{
    public:
    virtual void vfunc(){
        cout<<"This is base's vfunc()"<<endl;
    }
};

class derived1: public base{
    public:
    void vfunc(){
        cout<<"This is derived1's vfunc()"<<endl;
    }
};

class derived2: public base{
    public:
    // void vfunc(){
    //     cout<<"This is derived2's vfunc()"<<endl;
    // }
};

int main(){
    
    base *p , b;

    derived1 d1;
    derived2 d2;

    p = &b;
    p->vfunc(); //This is base's vfunc()

    p = &d1;
    p->vfunc(); //This is derived1's vfunc()

    p = &d2;
    p->vfunc(); // This is base's vfunc()
    
    return 0;
}

/*
This is base's vfunc()
This is derived1's vfunc()
This is base's vfunc()
*/