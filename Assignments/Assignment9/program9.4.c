#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
   int icnt = 0,iFact=1;

   if(iNo<0)
   {
        iNo = -iNo;
   }
   for(icnt=1;icnt<=iNo;icnt++)
   {
        if(icnt % 2 != 0)
        {
        iFact = iFact * icnt;
        }
    }

   return iFact;

}

    
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of no is %d",iRet);
    


    return EXIT_SUCCESS;
}