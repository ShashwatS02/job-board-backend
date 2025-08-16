#include <bits/stdc++.h>
using namespace std;

int main() {

    // int n;
    // cout << "Enter size of array (must be > 3): ";
    // cin >> n;

    // if (n <= 3) {
    //     cout << "Array size must be greater than 3";
    //     return 0;
    // }

    // int arr[n];
    // cout << "Enter " << n << " unique elements:\n";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // int largest = arr[0];
    // int secondLargest = INT_MIN;

    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > largest) {
    //         secondLargest = largest;
    //         largest = arr[i];
    //     } else if (arr[i] > secondLargest && arr[i] != largest) {
    //         secondLargest = arr[i];
    //     }
    // }

    // cout << "Second largest element is: " << secondLargest;

    // int n;
    // cout << "Enter size of array (n > 3): ";
    // cin >> n;

    // if (n <= 3) {
    //     cout << "Array size must be greater than 3.";
    //     return 0;
    // }

    // int arr[n];
    // cout << "Enter " << n << " unique elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // sort(arr, arr + n);  // Sort the array in ascending order

    // cout << "The third smallest element is: " << arr[2];

    //SecondLargest

    // int n;
    // cout << "Enter the size of Array (n>3): ";
    // cin >> n;

    // if (n <= 3) {
    //     cout << "Array size must be greater than 3.";
    //     return 0;
    // }

    // int arr[n];
    // cout << "Enter " << n << " unique elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // int largest = arr[0];
    // int secondLargest = INT_MIN;

    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > largest) {
    //         secondLargest = largest;
    //         largest = arr[i];
    //     }
    //     else if (arr[i] > secondLargest && arr[i] != largest) {
    //         secondLargest = arr[i];
    //     }
    // }

    // cout << secondLargest << endl;

    //Third smallest
    int n;
    cout << "Enter the size of Array (n>3): ";
    cin >> n;

    if (n <= 3) {
        cout << "Array size must be greater than 3.";
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " unique elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    cout << arr[2];

    return 0;
}