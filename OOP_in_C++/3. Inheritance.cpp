#include<bits/stdc++.h>
using namespace std;

class building{
    int rooms;
    int floors;
    int area;
public:
    void set_rooms(int num);
    int get_rooms();
    void set_floors(int num);
    int get_floors();
    void set_area(int num);
    int get_area();
};
class house : public building{
    int bedroom;
    int baths;
public:
    void set_bedrooms(int num);
    int get_bedrooms();
    void set_baths(int num);
    int get_baths();
};
class school: public building{
    int classroom;
    int offices;
public:
    void set_classroom(int num);
    int get_classroom();
    void set_offices(int num);
    int get_offices();
};


void building::set_rooms(int num){
    rooms = num;
}
void building::set_floors(int num){
    floors = num;
}
void building::set_area(int num){
    area = num;
}
int building::get_rooms(){
    return rooms;
}
int building::get_floors(){
    return floors;
}
int building::get_area(){
    return area;
}

// house is derived from buliding..
void house::set_bedrooms(int num){
    bedroom = num;
}
void house::set_baths(int num){
    baths = num;
}

int house::get_bedrooms(){
    return bedroom;
}

int house::get_baths(){
    return baths;
}
void school::set_classroom(int num){
    classroom = num;
}
void school::set_offices(int num){
    offices = num;
}
int school::get_classroom(){
    return classroom;
}
int school::get_offices(){
    return offices;
}

int main(){

    house h;
    school s;

    h.set_rooms(12);
    h.set_floors(3);
    h.set_area(4500);
    h.set_bedrooms(5);
    h.set_baths(3);

    //same goes for school..

    return 0;
}