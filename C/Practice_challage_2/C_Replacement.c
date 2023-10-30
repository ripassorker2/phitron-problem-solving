#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 0)
        {
            printf("0 ");
        }
        else if (arr[i] > 0)
        {
            printf("1 ");
        }
        else
        {
            printf("2 ");
        }
    }

    return 0;
}