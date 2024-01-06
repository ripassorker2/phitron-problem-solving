#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (i == j && i == (x / 2) + 1)
                cout << "X";
            else if (i == j)
                cout << "\\";
            else if (i + j == x - 1)
                cout << "/";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}