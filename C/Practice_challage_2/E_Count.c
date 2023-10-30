#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[1000000];
    int sum = 0;
    scanf("%s", a);
    for (int i = 0; i < strlen(a); i++)
    {
        sum = sum + a[i] - '0';
    }
    printf("%d", sum);

    return 0;
}
