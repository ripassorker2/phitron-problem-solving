#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;
    cin >> q;

    priority_queue<ll> pq;

    while (q--)
    {
        ll type;
        cin >> type;

        if (type == 1)
        {
            ll val;
            cin >> val;
            pq.push(val);
        }
        else
        {
            if (!pq.empty())
            {
                ll max_val = pq.top();
                cout << max_val << '\n';
                while (!pq.empty() && pq.top() == max_val)
                    pq.pop();
            }
            else
                cout << "empty\n";
        }
    }

    return 0;
}
