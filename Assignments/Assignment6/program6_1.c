#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fbill = 0.0f;

    if(iUnits < 0)
    {
        printf("invalid units");
    }
    if(iUnits <= 100)       
    {
        fbill = iUnits * 5;     //500 = 100 *5
        printf("Bill = %f",fbill);
    }
    else if(iUnits <= 200)
    {
        fbill = 500 + (iUnits - 100)*7;    // (100*5) + (150 * 7)
        printf("Bill = %f",fbill);

    }
    else
    {
        fbill = 1200 + (iUnits - 200)*10;
        printf("Bill = %f",fbill);

    }

}

int main()
{

    int iUnits = 0;

    printf("enter Consumed units\n");
    scanf("%d",&iUnits);


    CalculateElectricityBill(iUnits);



    return EXIT_SUCCESS;
}