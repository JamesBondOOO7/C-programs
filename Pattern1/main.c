#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number of rows : ");
    int n ;
    scanf("%d",&n);

    char ch = 'A';

    for(int i = 1 ; i<= n ; i++ )
    {

        for(int j = 0 ; j< n - i ; j++)
        {
            printf("  ");
        }

        for(int j = 1 ; j<= 2*i - 1 ; j++)
        {

            if(j<=i)
            {
                printf("%c ",ch);
                ch++;
            }

            else
            {
                ch = ch -2;
                printf("%c ",ch);
                ch++;
            }
        }
        ch = 'A';
        printf("\n");
    }
    return 0;
}
