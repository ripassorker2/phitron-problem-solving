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
        string str, str2 = "Timur";
        cin >> n >> str;

        bool flag = true;

        vector<bool> v(5, false);

        if (str.size() == 5)
        {
            for (char ch : str)
            {
                for (int i = 0; i < 5; i++)
                {
                    if (ch == str2[i])
                        v[i] = true;
                }
            }
        }

        for (int i = 0; i < 5; i++)
        {
            if (!v[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
