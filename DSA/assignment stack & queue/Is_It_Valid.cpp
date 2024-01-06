#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        stack<char> st;
        stack<char> st2;
        string s;
        cin >> s;
        int zeroCnt = 0;
        int oneCnt = 0;
        for (char c : s)
        {
            if (c == '0')
                st.push(c);
            else
                st2.push(c);
        }
        st.size() == st2.size() ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}