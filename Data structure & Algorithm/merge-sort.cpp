#include <iostream>

using namespace std;

void merge(int a[] , int l , int mid , int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int left[n1] , right[n2];
    for(int i=0;i<n1;i++){
        left[i] = a[i+l];
    }
    for(int i=0;i<n2;i++){
        right[i] = a[mid+1+i];
    }

    int i = 0 , j = 0 , k = l;

    while(i < n1 and j < n2){
        if(left[i] < right[j]){
            a[k++] = left[i++];
        }else{
            a[k++] = right[j++];
        }
    }
    while(i < n1)a[k++] = left[i++];
    while(j < n2)a[k++] = right[j++];
}

void mergeSort(int a[], int l, int r) {
    // Complete the function to implement merge sort
    if(l < r){
        int mid = (l+r) / 2;
        mergeSort(a , l , mid);
        mergeSort(a, mid+1,r);
        merge(a,l,mid,r);
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
