#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id, mark;
    string name;
    char grade;
    Student compair(Student x, Student y, Student z)
    {
        if (x.mark >= y.mark)
        {
            if (x.mark >= z.mark)
            {
                return x;
            }
            else
                return z;
        }
        else
        {
            if (y.mark >= z.mark)
                return y;
            else
                return z;
        }
    }
};

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        Student x, y, z, ans;
        cin >> x.id >> x.name >> x.grade >> x.mark;
        cin >> y.id >> y.name >> y.grade >> y.mark;
        cin >> z.id >> z.name >> z.grade >> z.mark;
        ans = ans.compair(x, y, z);
        cout << ans.id << " " << ans.name << " " << ans.grade << " " << ans.mark << endl;
    }
    return 0;
}