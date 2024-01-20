#include <stdio.h>
int main()
{
    // program to transfer the first characters
    FILE *f1 = fopen("textFile1.txt", "r");
    FILE *f2 = fopen("getFirstLetters.txt", "w");

    char word[15];
    while (fscanf(f1, "%s", word) == 1)
    {
        char firstLetter = word[0];

        fputc(firstLetter, f2);
    }

    return 0;
}