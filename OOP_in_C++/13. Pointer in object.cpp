#include <bits/stdc++.h>
using namespace std;

class cl{
    int i;
    public:
    cl(int j){i = j;}
    int get_i(){return i;}
};

int main(){
    
    // cl ob(88), *p;
    // p = &ob;
    // cout<<p->get_i()<<endl;

    cl ob1[3] = {1,2,3};
    cl *p;
    
    int i;

    p = ob1;

    for(int i=0;i<3;i++){
        cout<<p->get_i()<<endl;
        p++;
    }
    return 0;
}