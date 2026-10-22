#include<stdio.h>
#include<stdlib.h>

void Accept(int iNo)
{
    int icnt = 0;
    for(icnt =1; icnt<=iNo;icnt++)
    {
        printf("*\n");
    }

}

int main()
{

    int iValue =0;
    printf("enter a number");
    scanf("%d\n",&iValue);


    Accept(iValue);

    return EXIT_SUCCESS;
}