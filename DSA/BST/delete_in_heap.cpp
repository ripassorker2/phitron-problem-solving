#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int x)
{

    v.push_back(x);
    int cur_idx_ind = v.size() - 1;

    while (cur_idx_ind != 0)
    {
        int par_ind = (cur_idx_ind - 1) / 2;
        if (v[par_ind] < v[cur_idx_ind])
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

        if (left_idx <= last_idx && right_idx <= last_idx)
        {
            if (v[left_idx] >= v[right_idx] && v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else if (v[right_idx] >= v[left_idx] && v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
                break;
        }
        else if (left_idx <= last_idx)
        {
            if (v[left_idx] > v[cur_idx])
            {
                swap(v[left_idx], v[cur_idx]);
                cur_idx = left_idx;
            }
            else
                break;
        }
        else if (right_idx <= last_idx)
        {
            if (v[right_idx] > v[cur_idx])
            {
                swap(v[right_idx], v[cur_idx]);
                cur_idx = right_idx;
            }
            else
                break;
        }
        else
            break;
    }
}
int main()
{

    int n;
    cin >> n;

    vector<int> v;

    while (n--)
    {
        int x;
        cin >> x;
        insert(v, x);
    }

    for (int x : v)
        cout << x << " ";
    delete_heap(v);
    delete_heap(v);
    cout << endl;
    for (int x : v)
        cout << x << " ";
    return 0;
}