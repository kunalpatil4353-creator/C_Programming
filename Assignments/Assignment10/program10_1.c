#include<stdio.h>
#include<stdlib.h>

int CircleArea(float fRadius)
{
    float fPI = 3.14;
    float Area = 0.0f;

    Area = fPI * fRadius *fRadius;

   return Area;

}

    
int main()
{

    float fValue = 0.0f;
    double dRet = 0;

    printf("Enter radius:\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Circle area is %lf",dRet);
    


    return EXIT_SUCCESS;
}