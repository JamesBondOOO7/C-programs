#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
int main()
{
    printf("%2.4f \n",PI);

    // Format specifiers

    int a =1234 , b = 5678;

    scanf("%2d %4d",&a,&b);

    printf("%d %d",a,b);


    float f  = 11223344.556677;

    printf("%5.2f ",f );

    int c = 9 , e = 5 ;

    int d = c+++e;

    printf("%d",d);

    int x1 = 5;
    int x2 = x1<<1;
    int x3 = x1>>1;
    printf("%d  %d",x2,x3);
    return 0;
}
