#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen("‪D:\\SAMPLE FILE HANDLING\\File2.txt","r");

    if(fp == NULL)
    {
        printf("File not opened");

        exit(1);
    }
    else{
        printf("File opened ");
    }

    return 0;
}
