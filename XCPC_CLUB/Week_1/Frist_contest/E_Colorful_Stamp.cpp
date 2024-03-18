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
        bool ans = true;
        int n;
        cin >> n;
        string s;
        cin >> s;
        int size = s.size();
        if (size < 3)
        {
            if (size < 2)
                ans = false;
            else
            {
                if (s[0] == 'W' && s[1] == 'B')
                    ans = false;
                else if (s[0] == 'B' && s[1] == 'W')
                    ans = false;
                else if (s[0] == 'R' && s[1] == 'W')
                    ans = false;
                else if (s[0] == 'W' && s[1] == 'R')
                    ans = false;
            }
        }
        else
        {
            for (int i = 0; i < s.size() - 2 + 1; i++) // Corrected loop condition
            {
                if (s[i] == 'B' && s[i + 1] == 'B' && s[i + 2] == 'B')
                {
                    ans = false;
                    break;
                }
                else if (s[i] == 'R' && s[i + 1] == 'R' && s[i + 2] == 'R')
                {
                    ans = false;
                    break;
                }

                if (s[i] == 'W' && s[i + 1] == 'B' && s[i + 2] == 'W')
                {
                    ans = false;
                    break;
                }
                else if (s[i] == 'W' && s[i + 1] == 'R' && s[i + 2] == 'W')
                {
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}