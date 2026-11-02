#include<stdio.h>
#include<stdlib.h>

double squaremeter(int iNo)
{
    
    double dfix = 0.0929;
    double dAns = 0.0;

    dAns = iNo * dfix;



    return dAns;
    
}

    
int main()
{

    int iValue = 0;
    double dRet = 0;

    printf("Enter Area in square foot:\n");
    scanf("%d",&iValue);

    dRet = squaremeter(iValue);

    printf("squaremeter is %lf",dRet);
    


    return EXIT_SUCCESS;
}