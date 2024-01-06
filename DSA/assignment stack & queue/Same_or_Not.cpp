#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag = true;

    if (m != n)
        flag = false;
    else
    {
        while (!q.empty() || !st.empty())
        {
            if (st.top() != q.front())
                flag = false;
            st.pop();
            q.pop();
        }
    }

    flag ? cout << "YES\n" : cout << "NO\n";

    return 0;
}