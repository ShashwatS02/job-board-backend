#include <bits/stdc++.h>
using namespace std;

void fun (int a[], int n) {
        cout << sizeof(a) << endl;
        for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    }

int main() {

    // int arr[6] = {1,2,3,4,5,6};
    // int start = 0;
    // int end = 5;

    // while (start < end) {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }

    // for (int i = 0; i < 6; i++) {
    //     cout << arr[i] << " ";
    // }

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int arr[n];
    // arr[0] = 0;
    // arr[1] = 1;
    // for (int i = 2; i < n; i++) {
    //     arr[i] = arr[i-1] + arr[i-2];
    // }

    // cout << arr[n-1] << endl;  

    int arr[5] = {3, 2, 1, 6, 7};
    cout << sizeof(arr) << endl;
    fun(arr, 5);

    return 0;
}