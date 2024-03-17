#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int arr[t];

    for (int i = 0; i < t; i++)
        cin >> arr[i];

    sort(arr, arr + t);

    ll sum = 0, odd = 0;
    for (int i = 0; i < t; i++)
        sum += arr[i];

    if (sum % 2 == 0)
        cout << sum << endl;

    else
    {
        for (int i = 0; i < t; i++)
        {
            if (arr[i] % 2 != 0)
            {
                odd = arr[i];
                break;
            }
        }
        sum = sum - odd;
        cout << sum << endl;
    }

    return 0;
}