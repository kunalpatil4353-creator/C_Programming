#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue %2 ==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
}

int main()
{

    int iValue = 0;

    printf("enter a number\n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);





    return EXIT_SUCCESS;
}