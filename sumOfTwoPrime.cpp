#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    bool found = false;

    // Check for all pairs of numbers that sum to the given number
    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i)) // Check if both are prime
        {
            cout << num << " = " << i << " + " << num - i << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}
