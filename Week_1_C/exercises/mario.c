#include <cs50.h>
#include <stdio.h>

int get_height(void);

int main(void)
{
    // Get height
    int height = get_height();

    // Print the pyramid
    for (int row = 0; row < height; row++)
    {
        for (int spaces = row + 1; spaces < height; spaces++)
        {
            printf(" ");
        }
        for (int hashes = height + row + 1; hashes > height; hashes--)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_height(void)
{
    // Get height
    int n;
    while (n < 1 || n > 8)
    {
        n = get_int("Height: ");
    }
    return n;
}
