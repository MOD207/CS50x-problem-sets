#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void)
{
    int words = 1;
    int letters = 0;
    int sentences = 0;
    int i;

    // Prompt a text from the user
    string text = get_string("Text: ");

    // count the words, Letters, and sentences
    for (i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        if (text[i] == ' ')
        {
            words++;
        }
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    float L = letters / (float) words * 100;
    float S = sentences / (float) words * 100;

    // Add the Coleman-Liau index and round it
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print the result
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}