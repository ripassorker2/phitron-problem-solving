#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;

    char S;

    cin >> A >> S >> B;

    switch (S)
    {
    case '+':
        cout << A + B << endl;
        break;
    case '-':
        cout << A - B << endl;
        break;
    case '*':
        cout << A * B << endl;
        break;
    case '/':
        cout << A / B << endl;
        break;
    default:
        cout << "Something is wrong" << endl;
        break;
    }

    cout << endl;
    return 0;
}