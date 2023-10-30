#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;

    cin >> number;

    while (number >= 10)
    {
        number /= 10;
    }

    if (number % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    cout << number << endl;

    cout << endl;
    return 0;
}