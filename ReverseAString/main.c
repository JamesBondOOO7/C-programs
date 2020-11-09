#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    printf("Enter the String : ");
    char str[30] ;
    scanf("%s",str);
    char revstr[30];
    for(int i = 0 ; i< strlen(str) ; i++)
    {
        revstr[i] = str[strlen(str)-i-1];
    }
    revstr[strlen(str)] = '\0';
    printf("%s",revstr);
    return 0;
}
