#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("‪C:\SAMPLE FILE HANDLING\File1.txt","r+");

    char ch;

    if(fp == NULL)
    {

        printf("File not opened");

        exit(1);

    }

        ch = fgetc(fp);

        while(ch != EOF)
        {

            printf("%c",ch);

            ch = fgetc(fp);
        }

    fclose(fp);

    return 0;
}
