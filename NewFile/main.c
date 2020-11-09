#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];
    printf("Enter the name : ");
    gets(name);

    int roll;
    printf("Enter the roll number : ");
    scanf("%d",&roll);


    FILE *fp;
    fp = fopen("C:\\SAMPLE FILE HANDLING\\File2.txt","w");
    fprintf(fp,"Name = %s \t and roll number = %d",name,roll);
    fclose(fp);

    FILE *fp1;

    fp1 = fopen("C:\\SAMPLE FILE HANDLING\\File2.txt","r");
    if(fp1 == NULL)
    {
        printf("File not opened");

        exit(1);
    }
    else{
        printf("File opened ");
    }

    char ch;
    ch = fgetc(fp1);

    while(ch!=EOF)
    {
        printf("%c",ch);
        ch = fgetc(fp1);
    }

    fclose(fp1);
    return 0;
}
