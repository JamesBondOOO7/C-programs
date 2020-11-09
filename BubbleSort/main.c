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
   for(int i = 0 ; i<n ; i++)
   {
       for(int j = 0 ; j<n ; j++)
       {
           if(arr[i]<arr[j])
           {
               int tmp = arr[i];
               arr[i] = arr[j];
               arr[j] = tmp;
           }
       }
   }
   for(int i = 0 ; i<n ; i++)
   {
       printf("%d " , arr[i]);
   }
   return 0;
}
