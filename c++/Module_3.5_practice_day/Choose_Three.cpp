#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int n, sum, isFound = 0;
        cin >> n >> sum;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if ((arr[i] + arr[j] + arr[k]) == sum)
                    {
                        isFound = 1;
                        break;
                    }
                }
            }
        }

        isFound ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}