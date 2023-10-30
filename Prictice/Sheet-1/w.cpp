#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, e;

    scanf("%d %c%d %c%d", &a, &s, &b, &e, &c);

    if (s == '+')
    {
        if (a + b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b << endl;
        }
    }
    else if (s == '*')
    {
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b << endl;
        }
    }
    else if (s == '/')
    {
        if (a / b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a / b << endl;
        }
    }

    cout << endl;
    return 0;
}