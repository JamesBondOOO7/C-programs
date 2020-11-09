#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the string : ");

    char str[50] , *ptr;
    int u =0 , l = 0;
    gets(str);
    ptr = str;

    for(int i = 0 ; *ptr !='\0' ; i++)
    {

        if(*ptr>=65 && *ptr<=90)
        {
            u++;
        }

        else
        {
            l++;
        }
        ptr++;
    }

    printf("Lower - %d and Upper - %d" ,l,u);
    return 0;
}
