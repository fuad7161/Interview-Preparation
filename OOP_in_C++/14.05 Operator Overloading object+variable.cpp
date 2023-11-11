#include <bits/stdc++.h>
using namespace std;

class loc{
    int longitude , latitude;
    public:
    loc(){};
    loc(int x,int y){
        longitude = x;
        latitude = y;
    }
    void show(){
        cout<<longitude<<" "<<latitude<<endl;
    }
    loc operator=(loc a);
    friend loc operator+(loc op , int val);
    friend loc operator+(int val , loc op);
};

loc loc::operator=(loc a){
    longitude = a.longitude;
    latitude = a.latitude;
    return *this;
}

loc operator+(loc ob, int val){
    loc tem;
    tem.longitude = ob.longitude + val;
    tem.latitude = ob.latitude+val;
    return tem;
}

loc operator+(int val , loc ob){
    loc tem;
    tem.longitude = ob.longitude + val;
    tem.latitude = ob.latitude+val;
    return tem;
}

int main(){
    
    loc ob1(10,20) , ob2(5, 30) , ob3;
    ob1 = ob2+10; 
    ob3 = ob1+20;

    ob1.show(); // coutput 15 40
    ob3.show(); // coutput 35 60

    return 0;
}

/*
*/