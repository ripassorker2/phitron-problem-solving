#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + 1 == v[j] && v[j] + 1 == v[j + 1])
            {
                count += 2;
            }
            else if (v[i] + 1 == v[j])
            {
                count++;
            }
        }
    }

    cout << count;
    return 0;
}