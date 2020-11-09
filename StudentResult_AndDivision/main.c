#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sm [3];  // 3 subjects
    printf("Enter the marks of the student for 3 subjects(out of 100) \n");
    for(int i = 0 ; i< 3 ;i++)
    {
        printf("Enter marks for subject - %d  :",i+1);
        scanf("%d", &sm[i]);
    }
    for(int i = 0 ;i<3 ;i++)
    {
        if(sm[i]>=75)
        {
            printf(" 1st Division in subject %d", i+1);
        }
        else if(sm[i]<75 && sm[i] > 60)
        {
            printf(" 2nd Division in subject %d", i+1);
        }
        else if(sm[i]<60 && sm[i] > 45 )
        {
            printf(" 3rd Division in subject %d", i+1);
        }
        else{
            printf(" 4th Division in subject %d", i+1);
        }
        printf("\n");
    }
    return 0;
}
