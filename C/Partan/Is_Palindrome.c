#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
    int is_pal = 0;
    int st = 0;
    int en = strlen(s) - 1;

    while (st < en)
    {
        if (s[st] != s[en])
        {
            is_pal = 1;
            break;
        }
        st++;
        en--;
    }
    return is_pal;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int is_pal = is_palindrome(s);

    if (!is_pal)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}