#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int arr[1000];
    cout << "Enter the size of your array: ";
    cin >> n;

    cout << "Enter the elements of your array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end ++) {
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}