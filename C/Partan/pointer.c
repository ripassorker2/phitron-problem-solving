// #include <stdio.h>
// int main()
// {
//     double x = 8.4;
//     double *p = &x;
//     double *pt = p;
//     printf("%0.2lf\n", *p);
//     *pt = 35.3435;

//     printf("%lf\n", x);

//     return 0;
// }

#include <stdio.h>
void m(int *p)

{
    int i = 0;

    for (i = 0; i < 5; i++)

        printf("%d ", p[i]);
}

int main()

{

    int a[5] = {6, 5, 3};
    m(a);
    int *p;
}
