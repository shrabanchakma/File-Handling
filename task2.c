#include <stdio.h>
#include <string.h>

int main()
{
    // program to count total number of spaces
    FILE *txtFile = fopen("textFile1.txt", "r");
    if (txtFile == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    int character, spaceCounter = 0;

    while ((character = fgetc(txtFile)) != EOF)
    {
        if (character == ' ')
        {
            spaceCounter++;
        }
    }

    printf("Total number of spaces are: %d", spaceCounter);
    fclose(txtFile);
    return 0;
}