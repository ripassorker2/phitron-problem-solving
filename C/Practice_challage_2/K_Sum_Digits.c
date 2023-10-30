#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    long long int sum = 0;
    scanf("%s", s);
    for (int i = 0; i < n; i++)
    {
        int d = s[i] - '0';
        sum = sum + d;
    }
    printf("%lld", sum);

    return 0;
}
