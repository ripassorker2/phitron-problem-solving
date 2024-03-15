#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void insert_heap(vector<ll> &v, ll x)
{
    v.push_back(x);
    ll cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        ll parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}
void delete_heap(vector<ll> &v, int val)
{
    v.erase(remove(v.begin(), v.end(), val), v.end());
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int last_idx = v.size() - 1;
        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            // duitai ache
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else if (left_idx <= last_idx)
        {
            // left ase
            if (v[left_idx] > v[cur])
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else
            {
                break;
            }
        }
        else if (right_idx <= last_idx)
        {
            // right ase
            if (v[right_idx] > v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> arr;

    for (ll i = 0; i < n; ++i)
    {
        ll type;
        cin >> type;

        if (type == 1)
        {
            ll x;
            cin >> x;
            insert_heap(arr, x);
        }
        else
        {

            if (arr.empty())
                cout << "empty\n";
            else
            {
                cout << arr.front() << "\n";
                delete_heap(arr, arr.front());
            }
        }
    }

    return 0;
}
