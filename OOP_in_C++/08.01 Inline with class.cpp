#include <bits/stdc++.h>
using namespace std;

class myclass{
    int a,b;
    public:
    // automatic inline function..
    void init(int i,int j){a = i ; b = j;}
    void show(){cout<<a<<" "<<b<<" "<<endl;};
};

int main(){
    
    myclass x;
    x.init(10,20);
    x.show();
    
    return 0;
}