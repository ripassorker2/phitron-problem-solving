#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);

    int even = 0, odd = 0, positive = 0, neg = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            even += 1;
        }
        if (x % 2 != 0)
        {
            odd += 1;
        }
        if (x > 0)
        {
            positive = positive + 1;
        }
        if (x < 0)
        {
            neg += 1;
        }
    }

    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", neg);

    return 0;
}