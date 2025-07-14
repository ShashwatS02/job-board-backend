#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Invalid input enter an odd number." << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {

        if (i == (n / 2) + 1)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= n / 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
