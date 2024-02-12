#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx_ind = v.size() - 1;

    while (cur_idx_ind != 0)
    {
        int par_ind = (cur_idx_ind - 1) / 2;
        if (v[par_ind] > v[cur_idx_ind])
        {
            swap(v[par_ind], v[cur_idx_ind]);
            cur_idx_ind = par_ind;
        }
        else
            break;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur_idx = 0;

    while (true)
    {
        int left_idx = cur_idx * 2 + 1;
        int right_idx = cur_idx * 2 + 2;
        int last_idx = v.size() - 1;

        int smallest = cur_idx;

        if (left_idx <= last_idx && v[left_idx] < v[smallest])
        {
            smallest = left_idx;
        }

        if (right_idx <= last_idx && v[right_idx] < v[smallest])
        {
            smallest = right_idx;
        }

        if (smallest != cur_idx)
        {
            swap(v[cur_idx], v[smallest]);
            cur_idx = smallest;
        }
        else
        {
            break;
        }
    }
}

void print_heap(vector<int> v)
{
    for (int val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            int m;
            cin >> m;
            insert_heap(v, m);
            cout << v.front() << endl;
        }
        else if (x == 1)
        {
            if (v.empty())
                cout << "Empty" << endl;
            else
                cout << v.front() << endl;
        }
        else if (x == 2)
        {
            if (v.empty())
                cout << "Empty" << endl;
            else
            {
                delete_heap(v);
                if (v.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << v.front() << endl;
                }
            }
        }
    }
    return 0;
}
