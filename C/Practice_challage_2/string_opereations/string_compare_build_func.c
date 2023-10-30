#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    int v = strcmp(a, b);

    if (v > 0)
    {
        printf("a is big");
    }
    else if (v < 0)
    {
        printf("b is big");
    }
    else
    {
        printf("same");
    }

    return 0;
}