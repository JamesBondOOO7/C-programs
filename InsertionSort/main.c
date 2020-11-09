#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[50];
   printf("Enter the number of elements : ");
   int n ;
   scanf("%d",&n);

   printf("Enter the elements \n");

   for(int i = 0 ; i< n ; i++)
   {
       scanf("%d",&arr[i]);
   }


   for(int counter = 1 ; counter<n ; counter++)
   {
       int j = counter-1;
       int val = arr[counter];
       while(j>=0 && val < arr[j])
       {
           arr[j+1] = arr[j];
           j--;
       }

        arr[j+1] = val;
   }

   for(int i = 0 ; i<n ; i++)
   {
       printf("%d " , arr[i]);
   }

   return 0;
}
