#include<bits/stdc++.h>
using namespace std;

void reversStr(char* name){
	// using pointers.
	int n = strlen(name);
	char *start_ptr = name;
	char *end_ptr = start_ptr+n-1;
	while(start_ptr < end_ptr){
		swap(*start_ptr , *end_ptr);
		start_ptr++;
		end_ptr--;
	}
}

int32_t solve() {

	// write a code for reversing a name. using pointer...

	char name[9] = {'c','o','d','i','c','t','i','o','n'};

	reversStr(name); // O(n) O(1);

	for(int i=0;i<strlen(name);i++){
		cout<<name[i]<<" ";
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

