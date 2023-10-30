#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (N == 1)
        {
            printf("%d\n", -1);
        }
        else if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}