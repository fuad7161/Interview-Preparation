#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

    int x = 10;
    int y = 10;

    const int * p = &y;
    x = *p;
    *p = x;
    cout<<p<<endl;
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

