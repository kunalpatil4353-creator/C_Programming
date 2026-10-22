#include<stdio.h>
#include<stdlib.h>

void checkMUltipleDivisibility(int iValue)
{
    if(iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("divisible by both");
    }
    else if(iValue % 3 == 0)
    {
        printf("divisible by 3 only");
    }
    else if(iValue % 5 == 0)
    {
        printf("divisible by 5 only");
    }
    else
    {
        printf("not divisible by either");
    }
}

int main()
{

    int iValue = 0;
    

    printf("enter a number\n");
    scanf("%d",&iValue);

    

    checkMUltipleDivisibility(iValue);





    return EXIT_SUCCESS;
}