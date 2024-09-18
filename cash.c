#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Please enter the amount ");
    int change = get_int("N: \n");
    int coin_count = 0;

    coin_count += change / 25;
    change %= 25;

    coin_count += change / 10;
    change %= 10;

    coin_count += change / 5;
    change %= 5;

    coin_count += change;

    printf("%i \n", coin_count);
}
