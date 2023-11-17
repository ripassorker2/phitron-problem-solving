#include <stdio.h>

long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int ans = factorial(n - 1);
    return n * ans;
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int res = factorial(n);
    printf("%lld", res);

    return 0;
}