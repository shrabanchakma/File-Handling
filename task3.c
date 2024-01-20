#include <stdio.h>
#include <string.h>

int main()
{
    // program to count a particular word
    FILE *txtFile = fopen("textFile1.txt", "r");
    if (txtFile == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    char search[10];
    char word[20];
    int countWord = 0;
    printf("What do you wanna search? ");
    fgets(search, sizeof(search), stdin);

    int search_len = strlen(search);
    if (search_len > 0 && search[search_len - 1] == '\n')
    {
        search[search_len - 1] = '\0';
    }

    while (fscanf(txtFile, "%s", word) == 1)
    {
        printf("%s %s\n", word, search);
        if (strcasecmp(word, search) == 0)
        {
            printf("entered");
            countWord++;
        }
    }

    printf("The word %s appears %d times", search, countWord);
    // while ()

    return 0;
}