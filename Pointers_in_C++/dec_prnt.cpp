#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

	int arr[5] = {10,20,30,40,50};

	// increment all the value and print them using pointer....

	// increment valuess....

	int* start = arr;

	int n = 5;

	for(int i=0;i<n;i++){
		(*start)++;
		start++;
	}

	// print the array..


	start = arr;
	int i = 0;
	while(i<n){
		cout<<*start<<endl;
		start++;
		i++;
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

