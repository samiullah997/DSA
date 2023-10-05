#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++) // start 1st loop from 1 to n
    {
        for (int j = 1; j <= n - i; j++) // start 2nd loop from 1 to n-i
        {
            cout << "  "; // print spaces
        }
        int k = i;
        for (int j = n; j >= n - i + 1; j--) // start 3rd loop from n to n-i+1
        {
            cout << k--<<" "; // print k with spaces.
        }
        for (int j = 2; j <= i; j++)
        {
            cout << j<<" ";
        }
        cout << endl;
    }
    return 0;
}