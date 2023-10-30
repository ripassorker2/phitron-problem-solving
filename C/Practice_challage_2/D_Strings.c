#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    int lenA = strlen(a);
    int lenB = strlen(b);
    printf("%d %d\n", lenA, lenB);
    printf("%s%s\n", a, b);

    printf("%c", b[0]);

    for (int i = 1; i < lenA; i++)
    {
        printf("%c", a[i]);
    }
    printf(" ");
    printf("%c", a[0]);
    for (int i = 1; i < lenB; i++)
    {
        printf("%c", b[i]);
    }

    return 0;
}