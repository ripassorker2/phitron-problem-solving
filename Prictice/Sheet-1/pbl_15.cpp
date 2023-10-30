#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;

    cin >> X;

    char letter;

    if (X >= 'a' && X <= 'z')
    {
        letter = X - 32;
        cout << letter << endl;
    }
    else if (X >= 'A' && X <= 'Z')
    {
        letter = X + 32;
        cout << letter << endl;
    }

    cout
        << endl;
    return 0;
}