#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r = "EGYPT", ans = "";
    cin >> s;
    int sz = s.size();

    for (int i = 0; i < sz; i++)
    {
        if (s[i] == r[0] && s[i + 1] == r[1] && s[i + 2] == r[2] && s[i + 3] == r[3] && s[i + 4] == r[4])
        {
            ans += " ";
            i += 4;
        }
        else
        {
            ans += s[i];
        }
    }
    cout << ans << endl;

    return 0;
}