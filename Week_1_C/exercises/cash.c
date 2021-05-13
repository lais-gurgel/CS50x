#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main()
{
    // Get change
    float change;
    do
    {
        change = get_float("change owed : ");
    }
    while (change < 0);

    // Convert to cents
    int cents = round(change * 100);

    // Calculate the number of each coin
    int k = cents % 25;
    int quarters = (cents - k) / 25;

    int m = k % 10;
    int dimes = (k - m) / 10;

    int pennies = m % 5;
    int nicles = (m - pennies) / 5;

    // Calculate the total of coins
    int coins = quarters + dimes + nicles + pennies;

    // Returns the numbers of coins
    printf("%i \n", coins);
}