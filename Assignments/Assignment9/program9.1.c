#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{

    int icnt = 0;
    int iTable = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(icnt=1;icnt<=iNo;icnt++)
    {
        printf("*\t");
    }
        for(icnt=1;icnt<=iNo;icnt++)
        {
            printf("#\t");

        }
        
    }

     




int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    


    return EXIT_SUCCESS;
}