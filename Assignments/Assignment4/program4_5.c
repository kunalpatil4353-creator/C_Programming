#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("not Divisible by 5");

    }
}

int main()
{

    int iValue = 0;

    printf("enter a number\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);





    return EXIT_SUCCESS;
}