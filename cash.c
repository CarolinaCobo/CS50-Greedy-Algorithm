#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    float dollars = 0;
    int cents = 0;
    int coins = 0;

    do
    {
        printf("Change owed:");
        scanf("%f", &dollars);
         printf("Coins returned: %f\n", dollars);
    }
    while (dollars <= 0);

    cents = round(dollars * 100);
    printf("cents: %i\n", cents);



    while (cents >= 25)
    {
       cents = cents - 25;
       coins++;
    }



    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }


    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }

    printf("Coins returned: %i\n", coins);

}
