#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p , r , t ;
    printf("Enter principal : ");
    scanf("%f",&p);
    printf("Enter rate : ");
    scanf("%f",&r);
    printf("Enter time(in years) : ");
    scanf("%f",&t);
    float SI = p*r*t*(0.01);
    printf("The Simple Interest is : %f " , SI);
    return 0;
}
