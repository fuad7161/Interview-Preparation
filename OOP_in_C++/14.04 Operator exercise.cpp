/*
Object are access by index..
take an array and access this array by index 
such ar atype is a class and ob is its object now I have to use ob[index] to access the atype array 
element.
*/
#include <bits/stdc++.h>
using namespace std;

class atype{
    int a[3];
    public:
    atype(int x,int y,int z){
        a[0] = x;
        a[1] = y;
        a[2] = z;
    }
    int get(int x){
        return a[x];
    }
    int operator [](int x){
        return a[x];
    }
};

int main(){
    
    atype op(1,2,3);

    cout<<op[1]<<endl;
    cout<<op.get(1)<<endl;
    
    
    return 0;
}