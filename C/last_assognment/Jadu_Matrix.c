// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int arr[n][m];

//     int temp = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if ((i == j) || (i + j == n - 1))
//             {
//                 if (arr[i][j] != 1)
//                 {
//                     temp = 0;
//                 }
//             }
//             else if (arr[i][j] != 0)
//             {
//                 temp = 0;
//             }
//         }
//         printf("\n");
//     }

//     if (n != m)
//     {
//         temp = 0;
//     }

//     if (temp)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{

    int row, colm;
    scanf("%d %d", &row, &colm);
    char a[row][colm];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (row != colm)
    {
        flag = 0;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            if (i == j || i + j == row - 1)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}