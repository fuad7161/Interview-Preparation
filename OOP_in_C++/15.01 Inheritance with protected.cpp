#include <bits/stdc++.h>
using namespace std;

class base{
    protected:
    int i , j;
    public:
    void set(int x,int y){i = x ; j = y;}
    void show(){cout<<i<<" "<<j<<endl;}
};

/*
here base class have i and j which are protected so this two variable will only accessible in the 
derived class but not from the otherside of the class.
in derived class i and j will be the public variable. 
*/
class derived: public base{
    int k;
    public :
    void setk(){k = i*j;}
    void showk(){cout<<i<<" "<<j<<" "<<k<<endl;}
};

int main(){
    
    derived ob;
    ob.set(2,3);
    ob.show();

    ob.setk();
    ob.showk();

    return 0;
}