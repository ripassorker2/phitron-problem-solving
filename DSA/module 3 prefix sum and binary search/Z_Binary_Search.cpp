#include <bits/stdc++.h>
using namespace std;

// bool binary_search(int *arr, int size, int target)
// {
//     int l = 0, r = size - 1;
//     while (l <= r)
//     {
//         int m = (r + l) / 2;
//         if (arr[m] == target)
//             return true;
//         else if (arr[m] < target)
//             l = m + 1;
//         else
//             r = m - 1;
//     }
//     return false;
// }

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (t--)
    {
        int x;
        cin >> x;
        bool is_found = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int m = (r + l) / 2;

            if (a[m] == x)
            {
                is_found = true;
                break;
            }
            else if (a[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }

        if (is_found)
            cout << "found\n";
        else
            cout << "not found\n";
    }
    return 0;
}