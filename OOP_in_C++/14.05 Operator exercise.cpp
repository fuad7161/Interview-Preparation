/*
need to change the object value with bracket method. 
such as. 
ob is an object of a class which have 2 value.
ob(10,30); // assign ob.first is 10 and ob.second is 30
ob.show(); coutput 10 30
ob(5,7);  // assign ob.first is 5 and ob.second is 7
ob.show(); coutput 5 7
*/

#include <bits/stdc++.h>
using namespace std;

class node{
    int first;
    int second;
    public:
    node(){}
    node(int x,int y){
        first = x;
        second = y;
    }
    node operator ()(int x,int y){
        first = x;
        second = y;
        return *this;
    }
    void show(){
        cout<<first<<" "<<second<<endl;
    }
};

int main(){
    
    node ob(10,30);
    ob.show();
    ob(5 ,7);
    ob.show();
    return 0;
}