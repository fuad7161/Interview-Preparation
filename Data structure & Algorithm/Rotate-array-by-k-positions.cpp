#include <iostream>

using namespace std;

void rotateArray(int arr[], int n, int k) {
    // Complete the function to rotate the array by k positions
    for(int i=0;i<k/2;i++){
        swap(arr[i] , arr[k-i-1]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateArray(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
