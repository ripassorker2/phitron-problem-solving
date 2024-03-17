#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool result = false;

    for (int i = 0; i <= c / a; i++)
    {
        for (int j = 0; j <= c / b; j++)
        {
            if (a * i + b * j == c)
            {
                result = true;
                break;
            }
        }
        if (result)
            break;
    }

    if (result)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
