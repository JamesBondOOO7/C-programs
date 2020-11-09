#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the element and its index :  ");
    int element , index ;
    scanf("%d %d",&element,&index);

    int arr[12] = {0,1,2,3,4,5,6,7,8,9,10} ;

    for(int i = 11 ; i>index ; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[index] = element;

    for(int i = 0 ; i < 12 ; i++)
    {

        printf("%d ",arr[i]);

    }
    return 0;
}
