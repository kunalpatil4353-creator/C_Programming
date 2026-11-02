#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
   int icnt = 0;
   int iFact1 =1;
   int iFact2 =1;
   int iDiff = 0;

   if(iNo<0)
   {
        iNo = -iNo;
   }
   for(icnt=1;icnt<=iNo;icnt++)
   {
        if(icnt % 2 == 0)
        {
        iFact1 = iFact1 * icnt;
        }
        else if(icnt % 2 != 0)
        {
        iFact2 = iFact2 * icnt;
        }

        iDiff = iFact1 - iFact2;

    }

   return iDiff;

}

    
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference of factorial is %d",iRet);
    


    return EXIT_SUCCESS;
}