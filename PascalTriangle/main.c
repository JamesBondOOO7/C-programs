#include <stdio.h>
#include <stdlib.h>

int ncr(int n , int r);
int main()
{
    printf("Enter the limit : ");
    int n;
    scanf("%d",&n);
    for(int i = 0 ; i <= n ; i++)
    {

        for(int j = 0 ; j < i + 1 ; j++)

        {
            if(j==i || j==0)
            {

                printf("1 ");

            }

            else
            {

                printf("%d ", ncr(i,j));
            }

        }

        printf("\n");
    }
    return 0;
}

int ncr(int n , int r)
{
    int f1 , f2 , f3 , f4;
    f1=f2=f3=1;

    for(int i = 1 ; i<=n ; i++)
    {
        f1 = f1*i;
    }

     for(int i = 1 ; i<=n-r; i++)
    {
        f2 = f2*i;
    }

     for(int i = 1 ; i<=r ; i++)
    {
        f3 = f3*i;
    }

    f4 = f1/(f2*f3) ;

    return f4;
}
