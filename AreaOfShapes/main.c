#include <stdio.h>
#include <stdlib.h>
int AreaOfCircle(int r);
int AreaOfSquare(int side);
int AreaOfRec(int l , int b);
int AreaOfRhombus(int d1 , int d2);
int AreaOfTriangle(int b , int h);
int main()
{
    printf("Circle - 1\n");
    printf("Square - 2\n");
    printf("Rectangle - 3\n");
    printf("Rhombus - 4\n");
    printf("Triangle - 5\n");
    int choice ;
    scanf("%d",&choice);
    if(choice == 1)
    {
        int r;
        printf("Enter Radius : ");
        scanf("%d",&r);
        printf("%d",AreaOfCircle(r));
    }
    else if(choice==2)
    {
        int side;
        printf("Enter the side : ");
        scanf("%d",&side);
        printf("%d",AreaOfSquare(side));
    }
    else if(choice == 3)
    {
        int l , b ;
        printf("Enter the length and breadth : ");
        scanf("%d",&l);
        scanf("%d",&b);
        printf("%d",AreaOfRec(l,b));
    }
    else if(choice == 4)
    {
        int d1 , d2 ;
        printf("Enter the diagonals : ");
        scanf("%d",&d1);
        scanf("%d",&d2);
        printf("%d",AreaOfRhombus(d1,d2));
    }
    else if(choice == 5)
    {
        int b , h ;
        printf("Enter base and height of triangle : ");
        scanf("%d",&b);
        scanf("%d",&h);
        printf("%d",AreaOfTriangle(b,h));
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
int AreaOfCircle(int r)
{
    return 3.14*r*r ;
}
int AreaOfSquare(int side)
{
    return side*side;
}
int AreaOfRec(int l , int b)
{
    return l*b;
}
int AreaOfRhombus(int d1 , int d2)
{
    return 0.5 * d1*d2;
}
int AreaOfTriangle(int b , int h)
{
  return 0.5 * b*h;
}
