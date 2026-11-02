#include<stdio.h>
#include<stdlib.h>

int RectArea(float fWidth,float fheight)
{
    float fArea = 0.0f;

    fArea = fWidth * fheight;

   return fArea;

}

    
int main()
{

    float fValue1 = 0.0f;
    float fValue2 = 0.0f;
    double dRet = 0;

    printf("Enter width:\n");
    scanf("%f",&fValue1);

    printf("Enter height:\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("rectangle area is %lf",dRet);
    


    return EXIT_SUCCESS;
}