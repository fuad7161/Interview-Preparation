#include <bits/stdc++.h>
#include<cstring>
using namespace std;

const int IN = 1;
const int CHECKED_OUT = 0;

class book{
    string author;
    string title;
    int status;
    public:
    book(string n , string t, int s);
    int get_status(){return status;}
    void set_status(int s){status = s;}
    void show();
};

book::book(string n, string t, int s){
    author = n;
    title = t;
    status = s;
}

void book::show(){
    cout<<title<<" by "<<author<<" is ";
    if(status == IN){
        cout<<"in."<<endl;
    }else{
        cout<<"out."<<endl;
    }
}

int main(){
    book b1("Fuad" , "Jiboner halcal" , IN);
    book b2("Imran", "Marakor public",CHECKED_OUT);

    b1.show();
    b2.show();
    return 0;
}

// class myclass{
//     int a,b;
//     public:
//     // parameterized constructor..
//     myclass(int i,int j){a = i ; b = j;}
//     void show(){cout<<a<<" "<<b<<" "<<endl;};
// };

// int main(){
    
//     myclass x(10,20);
//     x.show();
    
//     return 0;
// }