#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char ch[n + 1];

        for (int i = 0; i < n; i++)
            cin >> ch[i];

        queue<char> q;

        for (int i = 0; i < n; i = i + 2)
        {
            if ((ch[i] == 'R' && ch[i + 1] == 'B') || (ch[i] == 'G' && ch[i - 1] == typedef(char)))
            {
                if (q.empty())
                {
                    q.push('P');
                }
                else
                {
                    if (q.front() == 'P')
                    {
                        q.pop();
                    }
                    else
                    {
                        q.push('P');
                    }
                }
            }
            else if (ch[i] == 'R' && ch[i + 1] == 'G')
            {
                if (!q.empty())
                {
                    if (q.front() == 'Y')
                    {
                        q.pop();
                    }
                    else
                    {
                        q.push('Y');
                    }
                }
                else
                    q.push('Y');
            }
            else if (ch[i] == 'B' && ch[i + 1] == 'G')
            {
                if (!q.empty())
                {
                    if (q.front() == 'C')
                    {
                        q.pop();
                    }
                    else
                    {
                        q.push('C');
                    }
                }
                else
                    q.push('C');
            }
        }

        while (!q.empty())
        {
            cout << q.front();
            q.pop();
        }
        cout << endl;
    }

    return 0;
}