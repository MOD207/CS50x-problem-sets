#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    //check for only 2 argc
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    //open File
    FILE *input_file = fopen(argv[1], "r");
    //check if the file is valid
    if (input_file == NULL)
    {
        printf("couldn't open file :(\n");
        return 2;
    }
    //Declare variables
    unsigned char buffer[512];

    // Track the number of images generated
    int count_image = 0;

    //file pointer for found images
    FILE *output_file = NULL;

    //char filename
    char *filename = malloc(8 * sizeof(char));

    //Read the blocks of 512 bytes
    while (fread(buffer, sizeof(char), 512, input_file))
    {
        //check if the bytes indicate an image
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //write images filename
            sprintf(filename, "%03i.jpg", count_image);

            output_file = fopen(filename, "w");
            count_image++;
        }
        // check if output file has been used for valid input
        if (output_file != NULL)
        {
            fwrite(buffer, sizeof(char), 512, output_file);
        }
    }
    fclose(input_file);
    free(filename);
    fclose(output_file);
    return 0;
}