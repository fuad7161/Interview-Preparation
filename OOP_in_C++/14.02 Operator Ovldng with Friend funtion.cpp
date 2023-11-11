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
    friend loc operator++(loc &op);
    friend loc operator--(loc &op);
};

loc loc::operator=(loc a){
    longitude = a.longitude;
    latitude = a.latitude;
    return *this;
}

loc operator++(loc &ob){
    ob.longitude++;
    ob.latitude++;
    return ob;
}

loc operator--(loc &ob){
    ob.longitude--;
    ob.latitude--;
    return ob;
}

int main(){
    
    loc ob1(10,20) , ob2;
    ob1.show(); // output 10  20
    ++ob1;
    ob1.show(); // output 11  21
    ob2 = ++ob1; // output 12 22
    ob2.show(); // output 12 22
    --ob2;
    ob2.show(); //output 11 21
    
    return 0;
}

/*
10 20
11 21
12 22
11 21
*/