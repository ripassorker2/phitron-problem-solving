#include <bits/stdc++.h>
#define br "\n"

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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0')
                cnt++;
            else if (s[i] == '0' && s[i + 1] == '1')
                cnt++;
        }
        cout << cnt << br;
    }

    return 0;
}