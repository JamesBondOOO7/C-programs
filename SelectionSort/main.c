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

   for(int counter = 0  ; counter < n ; counter++)
   {
       int min = counter;
       for(int j = counter ; j<n ; j++)
       {
           if(arr[j]<arr[min])
            min = j;
       }

       int temp = arr[counter];
       arr[counter] = arr[min];
       arr[min] = temp;

   }


   for(int i = 0 ; i<n ; i++)
   {
       printf("%d " , arr[i]);
   }

    return 0;
}
