#include <stdio.h>
#include <string.h>
int main()
{
    // program to count total number of words
    FILE *f1 = fopen("textFile1.txt", "r");

    if (f1 == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    char text[50];
    int totalWords = 0;
    while (fscanf(f1, "%s", text) == 1)
    {
        printf("%s\n", text);
        totalWords++;
    }

    printf("total number of words are: %d", totalWords);
    fclose(f1);
    return 0;
}