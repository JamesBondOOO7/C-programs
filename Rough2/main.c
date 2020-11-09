#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    printf("Enter the string : ");

    char str[50];
    gets(str);
    int len = strlen(str);
    printf("%d \n",len);
    printf("%s",strrev(str));
    return 0;
}
