#include<bits/stdc++.h>
using namespace std;

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int32_t solve() {

    int a[] = {5,4,3,2,1};
    int n = 5;
    qsort(a,n,sizeof(int),compare);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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

