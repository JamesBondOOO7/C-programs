#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Enter the strings : ");
    char str1[50] ;
    char str2 [50];
    gets(str1);
    gets(str2);
    char str3[100];


    for(int i = 0 ; i< strlen(str1) ; i++)
    {

        str3[i] = str1[i];

    }


    for( i = 0 ; i < strlen(str2) ; i++)
    {

        str3[strlen(str1) + i] = str2[i];

    }

    str3[strlen(str1) + strlen(str2)] = '\0';

    printf("%s", str3);

    return 0;
}
