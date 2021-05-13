#include <cs50.h>
#include <stdio.h>

int get_start_size(void);
int get_end_size(int start);

int main(void)
{
    // Get start size
    int start_size = get_start_size();

    // Get end size
    int end_size = get_end_size(start_size);

    // Calculate number of years
    int years = 0;
    int population = start_size;

    while (population < end_size)
    {
        int born = population / 3;
        int pass_away = population / 4;
        population += born - pass_away;
        years++;
    }

    // Print numbers of years
    printf("Years: %i\n", years);
}

int get_start_size(void)
{
    // Get population start
    int n;
    do
    {
        n = get_int("Star size: ");
    }
    while (n < 9);
    return n;
}

int get_end_size(int start)
{
    // Get population end
    int n;
    do
    {
        n = get_int("End size: ");
    }
    while (n < start);
    return n;
}
