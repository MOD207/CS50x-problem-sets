#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h, r, c, s;
    // get the number of bricks
    do
    {
        h = get_int("Enter Height: ");
    }
    while (h < 1 || h > 8);

    // print the given value of bricks
    for (r = 0; r < h ; r++)
    {
        // spaces in the beggining
        for (s = 0; s < h - r - 1; s++)
        {
            printf(" ");
        }
        // columns
        for (c = 0; c <= r ; c++)
        {
            printf("#");
        }
        printf("  ");

        for (c = 0; c <= r ; c++)
        {
            printf("#");
        }
        // row
        printf("\n");
    }

}