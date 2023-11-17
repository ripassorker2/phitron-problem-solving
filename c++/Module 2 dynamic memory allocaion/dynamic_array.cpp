#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int a[5] = {1, 2, 3, 4, 5};

    int *s = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }
    return s;
}

int main()
{

    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}