#include<stdio.h>
#include<stdlib.h>

int FHtoCS(float ftemp)
{
    float fcelsius = 0.0f;

    (fcelsius = (ftemp - 32) * (5/9));


    return fcelsius;
    
}

    
int main()
{

    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter tempratue in faranite:\n");
    scanf("%d",&fValue);

    dRet = FHtoCS(fValue);

    printf("celsius is %lf",dRet);
    


    return EXIT_SUCCESS;
}