#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++) // start 1st loop from 1 to n
    {
        for (int j = 1; j <= n - i; j++) // start 2nd loop from 1 to n
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n; i <= 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}