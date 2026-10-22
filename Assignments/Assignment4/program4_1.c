#include<stdio.h>
#include<stdlib.h>

int main()
{
    void checkNumber(int iValue)
    {
        if(iValue > 0)
        {
            printf("positive number");
        }
        else if(iValue <  0)
        {
            printf("negative number");
        }
        else
        {
            printf("Zero");
        }
    }


    int iValue = 0;

    printf("enter a number\n");
    scanf("%d",&iValue);


    checkNumber(iValue);



    return EXIT_SUCCESS;
}