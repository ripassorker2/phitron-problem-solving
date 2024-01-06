#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id, cls;
    string nm;
    char s;
};

int main()
{
    int n;
    cin >> n;

    Student st[n];
    int fast = 0, last = n - 1;

    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
    }
    while (fast <= last)
    {
        char temp = st[fast].s;
        st[fast].s = st[last].s;
        st[last].s = temp;
        fast++;
        last--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
    }

    cout << endl;
    return 0;
}