#include <stdio.h>
int main()
{
    FILE *txtFile = fopen("textFile1.txt", "r");
    if (txtFile == NULL)
    {
        printf("ERROR! File not Found");
        return 1;
    }

    return 0;
}