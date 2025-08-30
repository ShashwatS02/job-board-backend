#include <bits/stdc++.h>
using namespace std;

int main() {

    // char arr[] = {'a', 'p','p','l','e'};
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i];
    // }

    // char arr[20];
    // cin >> arr;
    // arr[2] = '\0';
    // cout << arr;

    // string s;
    // cin >> s;
    // cout << s;

    // string s;
    // getline(cin, s);
    // cout << s << endl;
    // cout << s.size();

    // string s1 = "Rohit", s2 = "Mohit";
    // // string s3 = s1 + s2;
    // string s3 = s1.append(s2);
    // cout << s3;

    // string s1 = "Rohit", s2 = "Mohit";
    // s1.push_back('P');
    // s2.pop_back();
    // cout << s1 << " " << s2;

    // string s = "shashwat is a \"good\" boy";
    // cout << s;
    
    // string s = "\\0";
    // cout << s;

    string s = "rohit";

    //Reverse the string

    int start = 0, end = s.size() - 1;
    while (start < end)
    {
       swap (s[start], s[end]);
       start++, end--; 
    }
    cout << s << endl;

    //Size of string 
    int size = 0;

    while (s[size] != '\0') {
        size++;
    }

    cout << size << endl;
    
    //isPalindrome
    string s2 = "namas";
    start = 0, end = s2.size() - 1;

    while (start < end) {
        if (s2[start] != s2[end]) {
            cout << "Not a palindrome";
            return 0;
        }
        start++, end--;
    }

    cout << "It is a Palindrome.";

    return 0;
}