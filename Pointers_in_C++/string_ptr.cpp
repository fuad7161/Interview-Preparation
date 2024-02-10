#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

    char name[6] = {'f' , 'u' , 'a' , 'd' , 'u' , 'l'};

    char* ptr = name;

    *(ptr+2) = 'z';

    for(int i=0;i<6;i++){
    	cout<<name[i];
    }cout<<endl;
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

