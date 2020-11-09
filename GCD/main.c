#include <stdio.h>
#include <stdlib.h>

int GCDr(int , int);
int main()
{
    printf("Enter 2 numbers : ");
    int a , b ;
    scanf("%d %d",&a,&b);
    int large = a>b?a:b;
    int small = a+b-large;
    printf("%d",GCDr(large,small));
    return 0;
}

int GCDr(int large , int small)
{
    if(large == small)
    {
        return large;
    }
    if( large%small == 0)
    {
        return small;
    }
    int gcd = GCDr(small,large%small);
    return gcd;
}
