#include <bits/stdc++.h>
using namespace std;

class base{
    protected:
    int i , j;
    public:
    void setij(int x,int y){i = x ; j = y;}
    void showij(){cout<<i<<" "<<j<<endl;}
};

class derived: protected base{
    int k;
    public :
    void setk(){setij(10,12);k = i*j;}
    void showall(){showij();cout<<k<<endl;}
};

int main(){
    
    derived ob;

    // ob.setij(1,2)  its illigal because its protected.
    ob.setk();

    ob.showall();

    // ob.showij() its also protected. cannot use outside from the class.

    return 0;
}