#include<bits/stdc++.h>
using namespace std;

void add(int a,int b){
    cout<<"Addition: "<<a+b<<endl;
}

void substract(int a,int b){
    cout<<"Addition: "<<a-b<<endl;
}

void multiply(int a,int b){
    cout<<"Multiplication: "<<a+b<<endl;
}

int32_t solve() {

    void (*fun_ptr[])(int,int) = {add,substract,multiply};
    (*fun_ptr[0])(12,10);
    (*fun_ptr[1])(12,10);
    (*fun_ptr[2])(12,10);
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

