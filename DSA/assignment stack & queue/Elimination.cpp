#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        stack<char> st;
        stack<char> st2;

        for (char c : s)
        {

            if (c == '0')
                st.push(c);
            else
            {
                if (!st.empty() && st.top() == '0')
                    st.pop();
                else
                    st.push(c);
            }
        }
        (st.empty()) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}