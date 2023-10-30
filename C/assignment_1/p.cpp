#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int isPrime = false;

    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = true;
            break;
        }
    }
    if (isPrime)
    {
        printf("Not prime number\n");
    }
    else
    {
        printf("Prime number\n");
        printf("Prime number\n");
    }

    cout << endl;
    return 0;
}