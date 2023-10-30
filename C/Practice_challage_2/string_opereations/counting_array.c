#include <stdio.h>
int main()
{

    int n;
    scanf("%d ", &n);
    int a[n];
    int cnt[10] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%d %d\n", i, cnt[i]);
        }
    }

    return 0;
}