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
        string s1, s2, s3, s4;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'B')
                s3 += 'G';
            else
                s3 += s1[i];
            if (s2[i] == 'B')
                s4 += 'G';
            else
                s4 += s2[i];
        }
        if (s3 == s4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}