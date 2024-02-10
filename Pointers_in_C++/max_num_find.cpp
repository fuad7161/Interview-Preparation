#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

	int a,b,c;
	a = 10;
	b = 100;
	c = 9000;

	int* p1 = &a;  
	int* p2 = &b;  
	int* p3 = &c;  

	if(*p1 > *p2 and *p1 > *p3){
		cout<<a<<endl;
	}

	if(*p2 > *p1 and *p2 > *p3){
		cout<<b<<endl;
	}
	if(*p3 > *p2 and *p3 > *p1){
		cout<<c<<endl;
	}
    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

