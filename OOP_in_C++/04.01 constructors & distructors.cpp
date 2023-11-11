#include <bits/stdc++.h>
using namespace std;

class myclass{
    public:
    int who;
    myclass(int id);
    ~myclass();
}global_ob1(1) , global_ob2(2);

myclass::myclass(int id){
    cout<<"Initializing "<<id<<"\n";
    who = id;
}

myclass::~myclass(){
    cout<<"Destructing "<<who<<endl;
}

int main(){
    
    myclass local_ob1(3);

    cout<<"this will not be first line displayed.\n";
    myclass local_ob2(4);
    
    return 0;
}

/*
Initializing 1
Initializing 2
Initializing 3
this will not be first line displayed.
Initializing 4
Destructing 4
Destructing 3
Destructing 2
Destructing 1
*/