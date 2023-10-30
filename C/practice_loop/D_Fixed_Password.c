#include <stdio.h>
int main()
{
    int pass;

    int corr_pass = 1999;

    while (scanf("%d", &pass) != EOF)
    {
        if (pass == corr_pass)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}