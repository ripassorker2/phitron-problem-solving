#include <stdio.h>

int get_len(char a[], int i)
{
    if (a[i] == '\0')
    {
        return 0;
    }

    int l = get_len(a, i + 1);

    return l + 1;
}

int main()
{
    char s[90] = "Helloasdasd";
    int len = get_len(s, 0);
    printf("%d", len);
    return 0;
}