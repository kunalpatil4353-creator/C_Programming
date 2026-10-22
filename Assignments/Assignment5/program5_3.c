#include<stdio.h>
#include<stdlib.h>

void DisplayGreade(float fmarks)
{
    if(fmarks>100 || fmarks<0)
    {
        printf("invalid marks");
    }
    else if(fmarks>=90 && fmarks<=100)
    {
        printf("A");
    }
    else if(fmarks>=75 && fmarks<=89)
    {
        printf("B");
    }
    else if(fmarks>=60 && fmarks<=74)
    {
        printf("C");
    }
    else if(fmarks>=40 && fmarks<=59)
    {
        printf("D");
    }
    else
    {
        printf("fail");
    }
}

int main()
{

    float fmarks = 0.0f;
    

    printf("enter marks\n");
    scanf("%f",&fmarks);

    

    DisplayGreade(fmarks);





    return EXIT_SUCCESS;
}