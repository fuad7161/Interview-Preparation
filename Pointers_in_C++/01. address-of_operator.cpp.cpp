#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

	// address of operator..

	int var = 10;
	// *ptr value
	// ptr = address.
	int* ptr;

	ptr = &var;
	cout<<var<<endl;
	*ptr = 20;
	cout<<ptr<<endl;

	cout<<var<<endl;


    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

