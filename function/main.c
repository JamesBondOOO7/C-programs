#include <stdio.h>
#include <stdlib.h>

int add_int(int , int);
int main()
{
    printf("%d",add_int(2,3));
    return 0;
}
int add_int(int a , int b)
{
    return a+b;
}
