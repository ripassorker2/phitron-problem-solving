#include <stdio.h>

int main()
{
    int t, r, tiger = 0, pathan = 0;
    scanf("%d", &t);
    getchar();
    char ch[100001];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &r);
        getchar();
        fgets(ch, 100001, stdin);

        for (int j = 0; j < r; j++)
        {
            if (ch[j] == 'T')
            {
                tiger++;
            }
            else if (ch[j] == 'P')
            {
                pathan++;
            }
        }
        if (tiger == pathan)
        {
            printf("Draw");
        }
        else if (tiger > pathan)
        {
            printf("Tiger");
        }
        else
        {
            printf("Pathaan");
        }
        printf("\n");
        pathan = 0;
        tiger = 0;
    }

    return 0;
}
