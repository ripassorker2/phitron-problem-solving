#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], b[21];

    scanf("%s", a);
    scanf("%s", b);

    int v = strcmp(a, b);

    printf("%d\n", v);

    if (v > 0)
    {
        printf("%s\n", b);
    }
    else if (v < 0)
    {
        printf("%s\n", a);
    }
    else
    {
        printf("%s", a);
    }

    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("%s\n", a);
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("%s\n", a);
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("%s\n", b);
    //         break;
    //     }

    //     if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("%s\n", b);
    //         break;
    //     }
    //     else
    //     {
    //         printf("%s\n", a);
    //         break;
    //     }
    // }

    return 0;
}