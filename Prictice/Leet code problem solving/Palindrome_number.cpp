#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int org = num;
    int rev = 0;
    while (num > 0)
    {
        int disit = num % 10;
        rev = (rev * 10) + disit;
        num = num / 10;
    }

    cout << endl;
    return 0;
}