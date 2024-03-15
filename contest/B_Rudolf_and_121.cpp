#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;
        long long int v[n];
        for (long long int i = 1; i <= n; i++)
            cin >> v[i];

        long long int i = n - 1;
        bool found = true;

        while (true)
        {
            if (v[i - 1] && v[i] && v[i + 1])
            {

                v[i - 1]--;
                v[i] -= 2;
                v[i + 1]--;

                i--;
                if (i == 1)
                    i = n - 1;
            }
            else
            {
                break;
            }
        }

        for (long long int j = 1; j <= n; j++)
        {
            if (v[j] != 0)
            {
                found = false;
                break;
            }
        }
        found ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
