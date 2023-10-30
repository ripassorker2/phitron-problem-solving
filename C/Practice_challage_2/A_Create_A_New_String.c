#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], t[1000];

    scanf("%s %s", s, t);
    int ss = strlen(s);
    int ts = strlen(t);
    printf("%d %d\n", ss, ts);
    printf("%s %s", s, t);

    return 0;
}