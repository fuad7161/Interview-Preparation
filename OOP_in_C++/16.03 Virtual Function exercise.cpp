#include <bits/stdc++.h>
using namespace std;

class convert{
    protected:
    double val1;
    double val2;
    public:
    convert(int i){val1 = i;}
    double getconv(){return val2;}
    double getinit(){return val1;}
    virtual void compute() = 0;
};

//Litter to gallons..
class l_to_g: public convert{
    public:
    l_to_g(int x):convert(x){}
    void compute(){
        val2 = val1 / 3.7854;
    }
};

//Fahrenheit to Celsius..
class f_to_c: public convert{
    public:
    f_to_c(int x):convert(x){}
    void compute(){
        val2 = (val1-32) / 1.8;
    }
};

int main(){
    
    convert *p;

    l_to_g lgob(10);
    f_to_c fcob(70);

    p = &lgob;
    cout<<p->getinit()<<" Liters is ";
    p->compute();
    cout<<p->getconv()<<" gallons"<<endl;

    p = &fcob;
    cout<<p->getinit()<<" in Fahrenhite is ";
    p -> compute();
    cout<<p->getconv()<<" Celcius"<<endl; 
    
    return 0;
}

/*
10 Liters is 2.64173 gallons
70 in Fahrenhite is 21.1111 Celcius
*/