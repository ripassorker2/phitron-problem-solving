#include <stdio.h>

void print_number(int digit)
{
    if (digit == 0)
    {
        return;
    }

    int x = digit % 10;
    print_number(digit / 10);
    printf("%d ", x);
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int digit;
        scanf("%d", &digit);
        print_number(digit);
        if (digit == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}