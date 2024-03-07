#include<bits/stdc++.h>
using namespace std;

void fun1(int x){
    cout<<"Fun 1 value "<<x<<endl;
}
void fun2(int x){
    cout<<"Fun 2 value "<<x<<endl;
}

void wrapper(void (*fun)(int),int v){
    fun(v);
}

int32_t solve() {

    // pass a function as an argument.
    wrapper(fun1 , 10);
    wrapper(fun2 , 12);
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

