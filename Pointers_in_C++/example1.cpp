#include<bits/stdc++.h>
using namespace std;

int32_t solve() {


	int fval , sval; //declear variable
	int* p1 , *p2;

	// int* p1 , p2; // wrong... 


	p1 = &fval;
	p2 = &sval;

	*p1 = 10;
	*p2 = *p1;
	p1 = p2;
	*p1 = 20;

	cout<<fval<<" "<<sval<<endl;


    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

