#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
   
   int i$ = 70,iAns = 0;

   iAns = iNo*i$;

   return iAns;

}

    
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("value of INR is %d",iRet);
    


    return EXIT_SUCCESS;
}