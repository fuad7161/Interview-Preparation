#include <bits/stdc++.h>
using namespace std;

class base{
    int i , j;
    public:
    void set(int x,int y){i = x;j = y;}
    void show(){cout<<i<<" "<<j<<endl;}
};

class derived:public base{
    int k;
    public:
    derived(int x){k = x;}
    void showk(){cout<<k<<endl;}
};

int main(){
    
    derived ob(2);

    ob.set(3,4);
    ob.show();

    ob.showk();
    
    return 0;
}