#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        stack<char> st;

        if (s1.size() != s2.size())
            cout << "NO\n";
        else
        {
            int flag = 0;
            for (auto c : s1)
            {
                st.push(c);
            }
            for (auto c : s2)
            {
                cout << c << " ";
            }
            cout << endl;
            for (auto c : s2)
            {
                cout << st.top() << " ";
                st.pop();
            }
            cout << endl;

            // for (auto c : s2)
            // {
            //     if (c == st.top())
            //     {
            //         flag = 0;
            //         st.pop();
            //     }
            //     else
            //     {
            //         flag = 1;
            //         break;
            //     }
            // }

            // if (flag)
            //     cout << "NO\n";
            // else
            //     cout << "YES\n";
        }
    }

    cout << endl;
    return 0;
}