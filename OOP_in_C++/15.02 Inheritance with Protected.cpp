#include <bits/stdc++.h>
using namespace std;

class base{
    protected:
    int i , j;
    public:
    void set(int x,int y){i = x ; j = y;}
    void show(){cout<<i<<" "<<j<<endl;}
};
class derived1: public base{
    int k;
    public :
    void setk(){k = i*j;}
    void showk(){cout<<i<<" "<<j<<" "<<k<<endl;}
};

class derived2: public derived1{
    int m;
    public :
    void setm(){m = i-j;}
    void showm(){cout<<i<<" "<<j<<" "<<m<<endl;}
};

int main(){
    
    derived2 ob;
    ob.set(2,3); // in base class set is public key thats why we can use it.
    ob.show(); // in base class it is also public key thats why we can also use it.

    // ob.k here ob.k is not accessible because its the privat key in the derived1 class.
    ob.setk();
    ob.showk();

    ob.setm(); // here we can use the i and j. because it is become the public key in derived1 class.
    ob.showm();

    return 0;
}