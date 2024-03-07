#include<bits/stdc++.h>
using namespace std;

void fun(int x , int y){
    cout<<"Summation of x+y : "<<x+y<<endl;
}

int32_t solve() {

    void (*fun_ptr)(int,int);
    fun_ptr = fun;
    fun_ptr(10,12);
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

