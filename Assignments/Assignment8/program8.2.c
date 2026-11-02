#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    else if(iNo == 0)
    {
        printf("zero");
    }
    else if(iNo == 1)
    {
        printf("one");
    }
    else if(iNo == 2)
    {
        printf("two");
    }
    else if(iNo == 3)
    {
        printf("three");
    }
    else if(iNo == 4)
    {
        printf("four");
    }
    else if(iNo == 5)
    {
        printf("five");
    }
    else if(iNo == 6)
    {
        printf("six");
    }
    else if(iNo == 7)
    {
        printf("seven");
    }
    else if(iNo == 8)
    {
        printf("eight");
    }
    else if(iNo == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid number :- Enter Single digit number");
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