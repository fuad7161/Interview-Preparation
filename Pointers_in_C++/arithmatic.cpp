#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

	int* ptr;
	int val = 10;
	ptr = &val;


	cout<<ptr<<endl;
	*ptr++; // inc add..
	cout<<ptr<<endl;    
	cout<<val<<endl;


	*++ptr; // inc of address
	cout<<ptr<<endl;
	cout<<val<<endl;

	
	ptr = &val;
	++*ptr; // inc value..
	cout<<ptr<<endl;
	cout<<val<<endl;

	(*ptr)++; // inc value... 
	cout<<ptr<<endl;
	cout<<val<<endl;
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

