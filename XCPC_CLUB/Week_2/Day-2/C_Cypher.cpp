#include <bits/stdc++.h>
#define ll long long int
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            int x;
            string s;
            cin >> x >> s;

            for (int k = 0; k < x; k++)
            {

                if (s[k] == 'U')
                {
                    arr[i]--;
                    if (arr[i] == -1)
                    {
                        arr[i] = 9;
                    }
                }
                else if (s[k] == 'D')
                {
                    arr[i]++;
                    if (arr[i] == 10)
                    {
                        arr[i] = 0;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}