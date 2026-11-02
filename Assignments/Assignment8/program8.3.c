#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{

    int icnt = 0;
    int iSum = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(icnt=1;icnt<=iNo;icnt++)
    {
        iSum = iSum * icnt;
        
    }

    return iSum;    


}

int main()
{

    int iValue = 0,iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d",iRet);


    return EXIT_SUCCESS;
}