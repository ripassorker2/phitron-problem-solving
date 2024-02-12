#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll, mark;
    Student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.mark != b.mark)
            return a.mark < b.mark;
        else
            return a.roll > b.roll;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, mark;
        cin.ignore();
        cin >> name >> roll >> mark;
        Student obj(name, roll, mark);
        pq.push(obj);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            int roll, mark;
            cin.ignore();
            cin >> name >> roll >> mark;
            Student obj(name, roll, mark);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (x == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
        }
        else if (x == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;
                }
            }
        }
    }
    return 0;
}
