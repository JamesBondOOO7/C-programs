#include <stdio.h>
#include <stdlib.h>

int fibbo(int n);


int main()
{
    int n ;
    scanf("%d",&n);
    for(int i = 0 ; i <= n ; i++)
    {

        printf("%d \t" ,fibbo(i));

    }
    return 0;
}

int fibbo(int n)
{

    if( n == 0)
    {
        return 0;
    }

    if( n == 1)
    {
        return 1;
    }

    return (fibbo(n-1) + fibbo(n-2));

}
