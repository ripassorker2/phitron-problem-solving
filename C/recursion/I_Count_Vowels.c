#include <stdio.h>

int cheek_vowel(char ch[], int i)
{
    if (ch[i] == '\0')
    {
        return 0;
    }

    int cnt = cheek_vowel(ch, i + 1);
    if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
        ch[i] = ch[i] + 32;
    }

    if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
    {
        return cnt + 1;
    }
    else
    {
        return cnt;
    }
}

int main()
{
    char ch[206];

    fgets(ch, 206, stdin);

    int v = cheek_vowel(ch, 0);

    printf("%d\n", v);

    return 0;
}