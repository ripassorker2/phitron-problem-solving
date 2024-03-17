#include <bits/stdc++.h>
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

        map<string, int> mp;
        string str[3][n];

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {

                if (mp[str[i][j]] == 1)
                    cnt = cnt + 3;
                else if (mp[str[i][j]] == 2)
                    cnt = cnt + 1;
                else
                    cnt = cnt + 0;
            }
            cout << cnt << " ";
        }
        cout << endl;
    }

    return 0;
}