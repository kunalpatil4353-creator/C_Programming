#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000)
    {
        fFinalAmount = fAmount;
    }
    else if(fAmount >= 1000 &&  fAmount<5000)
    {
        fDiscount = (fAmount * 10)/100;
        fFinalAmount = fAmount - fDiscount;
    }
    else
    {
        fDiscount = (fAmount * 20)/100;
        fFinalAmount = fAmount - fDiscount;
    }

    printf("Payable Amount: %.2f\n", fFinalAmount);    
    

}


int main()
{

    float fAmount = 0.0f;
    

    printf("enter Purchase Amount\n");
    scanf("f",&fAmount);

    CalculateDiscount(fAmount);




    return EXIT_SUCCESS;
}