#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int len = strlen(s);
    int fast = 0, last = len - 1, is_palindrome = 0;

    while (fast <= last)
    {
        if (s[fast] == s[last])
        {
            is_palindrome = 1;
            fast++;
            last--;
        }
        else
        {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}