#include <bits/stdc++.h>
using namespace std;
class cl{
    public:
    cl(int i){val = i;}
    int val;
    int double_val(){return val+val;}
};

int main(){
    
    int cl::*data;
    int (cl::*func)();

    cl ob1(1) , ob2(2);
    cl *p1 , *p2;

    p1 = &ob1;
    p2 = &ob2;

    data = &cl::val;
    func = &cl::double_val;

    cout<<"here are values: ";
    cout<<p1->*data<<" "<<p2->*data<<endl;

    cout<<"here they are double: ";
    cout<<(p1->*func)()<<" ";
    cout<<(p2->*func)()<<endl;
    
    return 0;
}