#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int n;

    while (true)
    {
        n = get_int("N: ");

        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j < n - i; j++)
                {
                    printf(" ");
                }
                for (int j = 0; j < i; j++)
                {
                    printf("#");
                }
                printf("\n");
            }
            break;
        }
        else
        {
            printf("Please enter a number greater than 0.\n");
        }
    }

    return 0;
}
