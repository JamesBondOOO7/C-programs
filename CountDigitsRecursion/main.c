#include <stdio.h>
#include <stdlib.h>
int CountDigitsRec(int num);
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("%d",CountDigitsRec(num));
    return 0;
}
int CountDigitsRec(int num)
{
    if(num == 0 )
    {
        return 0;
    }
    num = num/10;
    return ( 1 +CountDigitsRec(num));
}
