#include <bits/stdc++.h>
using namespace std;

union swap_byte{
    void Swap();
    void set_byte(unsigned short i);
    void show_word();

    unsigned short u;
    unsigned char c[2];
};

void swap_byte::Swap(){
    unsigned char t;
    t = c[0];
    c[0] = c[1];
    c[1] = t;
}

void swap_byte::show_word(){
    cout<<u<<endl;
}

void swap_byte::set_byte(unsigned short i){
    u = i;
}

int main(){

    swap_byte b;
    b.set_byte(49034);
    b.Swap();
    b.show_word();
    
    return 0;
}