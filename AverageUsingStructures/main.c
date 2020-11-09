#include <stdio.h>
#include <stdlib.h>
struct Student
{
    char name[25];
    float maths ;
    float comp;
    float eee;
    float bme;
    float phy;
};
int main()
{
    struct Student s1 ;
    printf("Enter name of student : ");
    scanf("%s",s1.name);
    printf("Enter the marks of students \n");
    printf("Maths : ");
    scanf("%f",&s1.maths);
    printf("Computer : ");
    scanf("%f",&s1.comp);
    printf("Electrical and Electronics Engineering : ");
    scanf("%f",&s1.eee);
    printf("Mechanical Engineering : ");
    scanf("%f",&s1.bme);
    printf("Physics: ");
    scanf("%f",&s1.phy);
    float avg = (s1.maths + s1.comp + s1.eee + s1.bme + s1.phy)/5;
    printf("Average marks : %f",avg);
    return 0;
}

