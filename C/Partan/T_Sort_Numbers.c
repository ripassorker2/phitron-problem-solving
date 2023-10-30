#include <stdio.h>
int main()
{
    int arr[3];
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 2; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}