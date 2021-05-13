#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Ask for user name
    string name = get_string("What is your name?\n");

    // Say hello to the user
    printf("hello, %s\n", name);
}