// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     list<int> my_list;
//     int test;
//     cin >> test;

//     while (test--)
//     {
//         int qr, val;
//         cin >> qr >> val;

//         if (qr == 0)
//         {
//             my_list.push_front(val);
//             for (int val : my_list)
//                 cout << val << " ";
//         }
//         else if (qr == 1)
//         {
//             my_list.push_back(val);
//             for (int val : my_list)
//                 cout << val << " ";
//         }
//         else if (qr == 2)
//         {
//             int sz = my_list.size();
//             cout << sz;
//             if (sz > val)
//             {
//                 cout << "eee";
//             }
//             else if (sz == 0)
//                 my_list.pop_front();
//             else if (sz == val)
//                 my_list.pop_back();
//             else
//             {
//                 my_list.erase(next(my_list.begin(), val));
//             }

//             for (int val : my_list)
//                 cout << val << " ";
//             for (auto it = my_list.rbegin(); it != my_list.rend(); it++)
//             {
//                 cout << *it << " ";
//             }
//             cout << endl;
//         }
//     }

//     cout << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

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
            // for (int val : my_list)
            //     cout << val << " ";
            // cout << endl;
        }
        else if (qr == 1)
        {
            my_list.push_back(val);
            // for (int val : my_list)
            //     cout << val << " ";
            // cout << endl;
        }
        else if (qr == 2)
        {
            int sz = my_list.size();
            if (sz <= val)
            {
            }
            else if (val == 0)
            {
                my_list.pop_front();
            }
            else
            {
                my_list.erase(next(my_list.begin(), val));
            }
        }
    }
    for (int val : my_list)
        cout << val << " ";
    cout << endl;
    return 0;
}