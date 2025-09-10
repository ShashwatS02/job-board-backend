#include <iostream>
using namespace std;

int main()
{

    int a = 4;

    cout << sizeof(a) << endl; // 4

    char name = 'a';

    cout << sizeof(name) << endl; // 1

    bool flag;

    a == name ? flag = true : flag = false;
    cout << flag << endl; // 0

    int c = 6;
    cout << c++ << endl; // 6
    int b = 5;
    cout << --b << endl; // 4

    int d = c + 5;
    cout << d << endl; // 12

    cout << &a << endl;

    return 0;
}