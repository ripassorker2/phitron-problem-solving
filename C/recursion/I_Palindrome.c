#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];

    fgets(s, 1001, stdin);

    int isPal = 1, fast = 0, last = strlen(s) - 1;

    for (int i = 0; i <= last; i++)
    {
        if (s[fast] != s[last])
        {
            isPal = 0;
            break;
        }
        else
        {
            isPal = 1;
            fast++;
            last--;
        }
    }

    if (isPal)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}