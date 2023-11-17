#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {

        long long int temp = LONG_LONG_MAX;
        int n;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                long long int sum = arr[j] + arr[k] + ((k + 1) - (j + 1));

                if (sum < temp)
                {
                    temp = sum;
                }
            }
        }
        cout << temp << endl;
    }

    cout << endl;
    return 0;
}
