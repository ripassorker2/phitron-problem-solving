#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {

            if (q.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }

    return 0;
}