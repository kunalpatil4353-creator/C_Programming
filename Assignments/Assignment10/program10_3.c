#include<stdio.h>
#include<stdlib.h>

int KMtoMETER(int iNo)
{
    int imeter = 1000;
    int iAns = 0;

    iAns = iNo * imeter;


    return iAns;
    
}

    
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance:\n");
    scanf("%d",&iValue);

    iRet = KMtoMETER(iValue);

    printf("Distance in meter is %d",iRet);
    


    return EXIT_SUCCESS;
}