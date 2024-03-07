#include<bits/stdc++.h>
using namespace std;

void fun(int x){
    cout<<"It's : "<<x<<endl;
}

int32_t solve() {

    void (*fun_ptr)(int);
    fun_ptr = fun;
    fun_ptr(10);
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

