
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000000];

    fgets(a, 1000000, stdin);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '\\')
        {
            break;
        }
        else
        {
            printf("%c", a[i]);
        }
    }

    return 0;
}