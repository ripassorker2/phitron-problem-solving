#include <bits/stdc++.h>
#define ll long long int
#define br "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 0;

        for (int i = 0; i < n; i++)
            ans += arr[i];

        int avg = ans / n, carry = 0;
        for (int i = 0; i < n; i++)
        {
            if (avg < arr[i])
            {
                carry += arr[i] - avg;
                arr[i] = avg;
            }
            else
            {
                int need = avg - arr[i];
                if (carry >= need)
                {
                    arr[i] = avg;
                    carry -= need;
                }
                else
                    break;
            }
        }

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != avg)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << br;
        else
            cout << "NO" << br;
    }

    return 0;
}