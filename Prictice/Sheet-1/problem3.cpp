#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
    lli num1, num2;

    cin >> num1 >> num2;
    lli summation, multiplication, subtraction;

    summation = num1 + num2;
    multiplication = num1 * num2;
    subtraction = num1 - num2;

    cout << num1 << " + " << num2 << " = " << summation << endl;
    cout << num1 << " * " << num2 << " = " << multiplication << endl;
    cout << num1 << " - " << num2 << " = " << subtraction << endl;

    cout << endl;
    return 0;
}