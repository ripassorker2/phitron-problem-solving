#include <stdio.h>
int main()
{
    int n, temp = 0, num;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num > temp)
        {
            temp = num;
        }
    }

    printf("%d\n", temp);

    return 0;
}