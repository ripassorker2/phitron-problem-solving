#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, year, month, day;

    cin >> n;

    year = n / 365;
    month = (n - (year * 365)) / 30;
    day = n - ((month * 30) + (year * 365));
    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days" << endl;

    cout << endl;
    return 0;
}