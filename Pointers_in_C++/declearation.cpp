#include<bits/stdc++.h>
using namespace std;

int32_t solve() {


	int fval , sval; //declear variable
	int* ptr ; // declear pointer.
	ptr = &fval; // addressing 
	*ptr = 10; 
	ptr = &sval;
	*ptr = 20;
	cout<<fval <<" "<<sval<<endl;
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

