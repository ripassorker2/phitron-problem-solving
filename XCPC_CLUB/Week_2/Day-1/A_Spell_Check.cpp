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

        bool flag = false;

        if (n > 5)
        {
            flag = false;
        }
        else
        {
            for (int i = 0; i < 5; i++)
            {
                for (int J = 0; J < 5; J++)
                {
                    if (str[i] == str2[J])
                    {
                        flag = true;
                    }
                }
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}