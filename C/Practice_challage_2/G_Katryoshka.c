#include <stdio.h>
#define lli long long int

lli min(lli a, lli b, lli c)
{
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}
int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n == 0 || k == 0)
    {
        printf("0\n");
    }
    else
    {
        lli x = min(n, m, k);
        n = n - x;
        k = k - x;

        if (n / 2 >= k)
        {
            printf("%lld\n", x + k);
        }
        else if (n / 2 <= k)
        {
            printf("%lld\n", n / 2 + x);
        }
        else
        {
            printf("%lld\n", x);
        }
    }

    return 0;
}