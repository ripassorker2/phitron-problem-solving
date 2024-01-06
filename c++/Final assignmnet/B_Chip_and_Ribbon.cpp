#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    for (int i = 0; i < test; i++)
    {
        int n, count[n];
        cin >> n;
        int arr[n];
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            ar[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            count[i] = 0;
        }

        for (int i = 0; i < n;)
        {
            if (arr[i] != ar[i])
            {
                arr[i]++;
                count[i]++;
            }
            if (arr[i] == ar[i])
            {
                i++;
            }
            else
                i = i;
        }

        int maxValue = *std::max_element(count, count + n);
        cout << maxValue;
    }

    cout << endl;
    return 0;
}