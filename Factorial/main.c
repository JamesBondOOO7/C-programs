#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num , fact = 1;
   printf("Enter a number : ");
   scanf("%d",&num);
   if(num<0)
   {
       printf("Invalid Input");
   }
    else if( num == 0 || num == 1)
   {
       printf("%d",fact);
   }
   else
   {
   for(int i = num ; i>=1 ; i--)
   {
       fact =  fact*i;
   }
        printf("%d",fact);
   }
   return 0;
}
