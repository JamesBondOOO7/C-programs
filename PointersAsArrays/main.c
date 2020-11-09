#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the marks : ");
    int stud[10];
    int * ptr;
    ptr = stud;
    for(int i = 0 ; i< 10 ; i++)
    {

        scanf("%d",(ptr + i));

    }

    int avg = 0;

    for(int i = 0 ; i< 10 ;i++)
    {

        avg = avg + *(stud+i);      //         avg = avg + *(ptr+i);
                                   //          works same
    }

    avg = avg/10;

    printf("%d",avg);

    return 0;
}
