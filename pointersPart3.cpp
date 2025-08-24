#include <bits\stdc++.h>
using namespace std;

int main() {

    char arr[5] = "1234";
    char *ptr = arr;
    cout << arr << endl; //prints values
    cout << ptr << endl; //prints values

    //print address
    cout << static_cast<void*>(arr) << endl;
    cout << (void*)ptr << endl;

    char name = 'a';
    char *ptr1 = &name;
    cout << (void*) &name << endl;
    cout << (void*) ptr << endl;

    return 0;
}