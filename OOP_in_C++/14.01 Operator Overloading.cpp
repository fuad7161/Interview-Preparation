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
    loc operator+(loc a);
    loc operator-(loc a);
    loc operator=(loc a);
    loc operator++();
};

loc loc::operator+(loc a){
    loc tem;
    tem.longitude = longitude + a.longitude;
    tem.latitude = latitude + a.latitude;
    return tem;
}

loc loc::operator-(loc a){
    loc tem;
    tem.longitude = longitude - a.longitude;
    tem.latitude = latitude - a.latitude;
    return tem;
}

loc loc::operator=(loc a){
    longitude = a.longitude;
    latitude = a.latitude;
    return *this;
}

loc loc::operator++(){
    longitude++;
    latitude++;
    return *this;
}

int main(){
    
    loc ob1(10,20) , ob2(5,30) , ob3(90,90);

    ob1.show(); // output 10  20
    ob2.show(); // output 5  30

    ++ob1;

    ob1.show(); // output 11  21

    ob2 = ++ob1; // output 12 22

    ob1.show(); // output 12 22
    ob2.show(); // output 12 22

    ob1 = ob2 = ob3; // multiple assignment.

    ob1.show(); //output 90 90
    ob2.show(); //output 90 90
    
    return 0;
}

/*
10 20
5 30
11 21
12 22
12 22
90 90
90 90
*/