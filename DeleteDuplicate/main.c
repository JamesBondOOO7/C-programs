#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the size of array : ");
    int size ;
    scanf("%d",&size);
    int arr [40];
    printf("Enter the elements : ");
    for(int i = 0 ; i< size ;i++)
    {

        scanf("%d", &arr[i]);

    }

    for(int i = 0 ; i< size ; i++)
    {

        for(int j = i+1 ; j < size ; j++)

        {
            if(arr[i] == arr[j])
            {

                for(int k = j ; j< size ; k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("The new array is : ");
    for(int i = 0 ; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
