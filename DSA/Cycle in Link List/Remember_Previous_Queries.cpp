#include <bits/stdc++.h>
using namespace std;

void print(list<int> my_list)
{
    cout << "L -> ";
    for (int val : my_list)
        cout << val << " ";
    cout << "\nR -> ";
    for (auto it = my_list.rbegin(); it != my_list.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> my_list;
    int test;
    cin >> test;

    while (test--)
    {
        int qr, val;
        cin >> qr >> val;

        if (qr == 0)
        {
            my_list.push_front(val);
            print(my_list);
        }
        else if (qr == 1)
        {
            my_list.push_back(val);
            print(my_list);
        }
        else if (qr == 2)
        {
            int sz = my_list.size();
            if (sz <= val)
            {
            }
            else if (sz == 0)
                my_list.pop_front();
            else
                my_list.erase(next(my_list.begin(), val));

            print(my_list);
        }
    }
    return 0;
}