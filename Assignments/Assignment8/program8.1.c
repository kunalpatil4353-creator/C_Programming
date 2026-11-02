#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{

    if(iNo<0)
    {
        printf("negative");
    }
    else if(iNo<50)
    {
        printf("small");
    }
    else if(iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else{
        printf("large");
    }




}

int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Number(iValue);


    return EXIT_SUCCESS;
}