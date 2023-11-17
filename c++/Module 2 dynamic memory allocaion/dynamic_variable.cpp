#include <bits/stdc++.h>
using namespace std;

int *fun()
{
    // int *p = new int;

    // *p = 20;
    // cout << &p << endl;

    // return &p;

    int *p = new int;

    *p = 20;
    cout << p << endl;

    return p;
}

int main()
{

    int *s = fun();
    cout << s << endl;
    // int *s = new int;
    // *s = 20;

    // float *f = new float;

    // *f = 34.23453;

    // cout << *s << "\n";
    // cout << fixed << setprecision(3) << *f << "\n";

    printf("\n");
    return 0;
}
