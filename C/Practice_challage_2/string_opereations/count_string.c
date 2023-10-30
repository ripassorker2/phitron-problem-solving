#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int cnt[26] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        // printf("%d ", value);
        cnt[value]++;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 'a';
        if (cnt[val] != 0)
        {
            printf("%c : %d\n", val + 'a', cnt[val]);
        }
        cnt[val] = 0;
    }

    return 0;
}