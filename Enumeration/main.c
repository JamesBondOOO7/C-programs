#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Colors {RED = 5 , YELLOW , PINK , GREEN = 7 , BLUE = 8};
    printf("%d \n",BLUE);


    int c = (enum Colors) 7 ;       // TYPE CASTING INTO ENUM DT
    printf("%d \n",c);


    c = RED + GREEN ;
        printf("%d",c);

    return 0;
}
