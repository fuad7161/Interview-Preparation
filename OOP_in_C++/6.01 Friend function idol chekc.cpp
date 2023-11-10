#include <bits/stdc++.h>
using namespace std;

const int IDEL = 0;
const int INUSE = 1;

class C2; //forword declearation

class C1{
    int status;
    public:
    void set_status(int state);
    friend int idle(C1 a, C2 b);
};

class C2{
    int status;
    public:
    void set_status(int state);
    friend int idle(C1 a, C2 b);
};

void C1::set_status(int state){
    status = state;
}

void C2::set_status(int state){
    status = state;
}

int idle(C1 a,C2 b){
    if(a.status || b.status)return 0;
    else return 1;
}

int main(){
    
    C1 x;
    C2 y;
    x.set_status(IDEL);
    y.set_status(IDEL);

    if(idle(x,y)){
        cout<<"Screen can be used"<<endl;
    }else{
        cout<<"In use"<<endl;
    }

    y.set_status(INUSE);

    if(idle(x,y)){
        cout<<"Screen can be used"<<endl;
    }else{
        cout<<"In use"<<endl;
    }
    
    return 0;
}