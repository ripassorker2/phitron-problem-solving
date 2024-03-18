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
        vector<int> v;

        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
            v.push_back(s[i] - '0');

        if (v[0] + v[1] + v[2] == v[3] + v[4] + v[5])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}