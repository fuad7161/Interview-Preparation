#include <bits/stdc++.h>
using namespace std;

void Print(int x){
    cout<<x<<endl;
    return;
}

void Print(int x,int y){
    cout<<x<<" "<<y<<endl;
    return;
}

void Print(int x , int y,int z){
    cout<<x<<" "<<y<<" "<<z<<endl;
    return;
}


signed solve(){

    Print(1);
    Print(1,2);
    Print(1,2,3);

    return 0;
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);int test = 1;
    // cin>>test;
    while (test--)solve();return 0;
}