#include<stdio.h>
#include<stdlib.h>

void pattern(int iNo)
{
    int icnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(icnt = 1;icnt<=iNo;icnt++)
    {
        printf("$\t*\t");
    }



}

int main()
{

    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    pattern(iValue);


    return EXIT_SUCCESS;



}