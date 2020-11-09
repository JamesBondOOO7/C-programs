#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the two numbers : \n");
    int n1 , n2 ;
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Initially: %d and %d\n",n1,n2);
    int * p1 = &n1 ;
    int * p2 = &n2 ;
    int tmp = *p1 ;   // tmp stores the value at address stored by p1 i.e n1
    *p1 = *p2;
    *p2 = tmp;
    printf("Finally: %d and %d", n1 , n2);
    return 0;
}
