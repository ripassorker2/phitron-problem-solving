// #include <bits/stdc++.h>
// using namespace std;

// bool cmp(pair<string, int> &a, pair<string, int> &b)
// {
//     if (a.first != b.first)
//         return a.first < b.first;
//     else
//         return a.second > b.second;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cin.ignore();
//     vector<pair<string, int>> v;

//     for (int i = 0; i < n; i++)
//     {
//         string s;
//         int x;
//         cin >> s >> x;
//         v.push_back({s, x});
//     }

//     sort(v.begin(), v.end(), cmp);

//     for (auto p : v)
//     {
//         cout << p.first << " " << p.second << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int val;
    Person(string name, int val)
    {

        this->val = val;
        this->name = name;
    }
};
class cmp
{
public:
    bool operator()(Person a, Person b)
    {
        if (a.name != b.name)
            return a.name > b.name;
        else
            return a.val < b.val;
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, cmp> pq;
    for (int i = 0; i < n; i++)
    {

        string name;
        int val;
        cin >> name;
        cin.ignore();
        cin >> val;
        Person obj(name, val);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().val << endl;
        pq.pop();
    }
    return 0;
}