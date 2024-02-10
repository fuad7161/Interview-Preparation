#include<bits/stdc++.h>
using namespace std;

int32_t solve() {

	int n = 5;
	int arr[5];
	arr[0] = 1;
	arr[1] = 4;
	arr[2] = 9;
	arr[3] = 16;
	arr[4] = 25;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;


	int* ptr = arr;
	*ptr = 10;

	ptr++;
	*ptr = 20;

	ptr = &arr[2];
	*ptr = 30;

	ptr = arr + 3;
	*ptr = 40;

	ptr = arr;
	*(ptr+4) = 50;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;



	// arr[0] = 1;
	// arr[1] = 4;
	// arr[2] = 9;
	// arr[3] = 16;
	// arr[4] = 25;

	// for(int i=0;i<n;i++){
	// 	cout<<arr[i]<<" ";
	// }cout<<endl;

	// int* ptr;

	// ptr = arr;

	// cout<<*(ptr+1)<<endl;




    
    return 0;
    //error();
}

// int
int32_t main(){
    int test = 1;
    //cin>>test;
    while (test--)solve();return 0;
}

