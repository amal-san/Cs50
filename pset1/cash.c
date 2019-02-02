#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{
    float dollars;
    int cents;

    do
    {
	/*float is rounded */
        scanf("%f",&dollars);
        cents =(dollars * 100);
        round(cents);
    }
    while (cents <= 0);
	
    int quarters = cents / 25; /*quaters are 25c */
    int dimes = (cents % 25) / 10; /*dimes are 10c */
    int nickels = ((cents % 25) % 10) / 5; /*nickels are 5c */
    int pennies = ((cents % 25) % 10) % 5; /*pennies are 1c */

    printf("%d\n", quarters + dimes + nickels + pennies);
    return 0;
}
