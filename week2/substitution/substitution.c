#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    // check if key is Valid
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    string key = (argv[1]);
    int n = strlen(key);

    //check if the key contains only characters
    for (int i = 0; i < n; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Usage: ./substitution key\n");
            return 1;
        }
    }

    if (n != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    //checking for duplicates
    for (int i = 0; i < n; i++)
    {
        {
            for (int j = i + 1; j < n; j++)
            {
                if (key[i] == key[j])
                {
                    printf("Usage: ./substitution key\n");
                    return 1;
                }
            }
        }
    }

    // Prompt the user for Plaintext
    string plaintext = get_string("plaintext:  ");

    //print the Ciphertext
    printf("ciphertext: ");

    //check Ciphertext
    for (int i = 0; i < strlen(plaintext); i++)
    {
        if (isupper(plaintext[i]))
        {
            int letter = plaintext[i] - 65;
            printf("%c", toupper(key[letter]));
        }
        else if (islower(plaintext[i]))
        {
            int letter = plaintext[i] - 97;
            printf("%c", tolower(key[letter]));
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    // print new line
    printf("\n");
    return 0;
}