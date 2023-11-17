// #include <stdio.h>
// int main()
// {
//     int n, a, b, c;
//     long long int m;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld %d %d %d", &m, &a, &b, &c);
//         int i = 0;
//         int isFind = 0;

//         long long int ans = a * b * c;

//         while (m >= (ans * i))

//         {
//             if ((ans * i) == m)
//             {
//                 printf("%d \n", i);
//                 isFind = 0;
//                 break;
//             }
//             else
//             {
//                 isFind = 1;
//             }
//             i++;
//         }

//         if (isFind)
//         {
//             printf("-1\n");
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, a, b, c;
    long long int m;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int ans = a * b * c;
        long long int l = m / ans;

        if (m == 0)
        {
            printf("0\n");
        }
        else if (m % ans == 0)
        {
            printf("%lld\n", l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
