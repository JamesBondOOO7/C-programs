#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter the number : ");
    int num ;
    scanf("%d",&num);
    if(num<=1)
    {
        printf("Not Prime");
    }
    else if( num == 2)
    {
        printf("Prime");
    }
    else
    {   int count = 0;
        for(int i = 2 ; i*i<= num ; i++)
        {
            if(num%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}
