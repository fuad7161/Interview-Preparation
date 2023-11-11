#include <bits/stdc++.h>
using namespace std;

class loc{
    int longitude, latitude;
    public:
    loc(){}
    loc(int lg,int lt){
        longitude = lg;
        latitude = lt;
    }
    void show(){
        cout<<longitude<<" "<<latitude<<endl;
    }
    loc operator+ (loc op2);
};

//overload+ for loc.
/*
here left side parameter is passed implicitly to the function through the this pointer.
and the 2nd operand is passed as parameter... 
thouth it won't be work in large operation....
this operator function dose not change the value of those objects.

*/
loc loc::operator+(loc op2){
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}

int main(){
    
    loc ob1(10,20);
    loc ob2(5,30);

    ob1.show();
    ob2.show();

    ob1 = ob1 + ob2;

    ob1.show();
    
    return 0;
}