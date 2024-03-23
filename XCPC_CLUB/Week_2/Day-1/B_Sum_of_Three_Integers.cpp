#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int count = 0;

    for (int i = 0; i <= a && i <= b; i++)
    {
        for (int j = 0; j <= a && j <= b - i; j++)
        {
            int k = b - i - j;
            if (k >= 0 && k <= a)
                count++;
        }
    }
    cout << count;
    return 0;
}