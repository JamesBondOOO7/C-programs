#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch = 3;
    switch(ch)
    {
        case 1 : printf("Hello");
                    break;
        case 2 : printf("Hi");
                    break;
        default : printf("Bye");
        case 3 : printf("Correct");
                    break;
    }
    return 0;
}
