#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int icnt = 0;
    int isum = 1;

   

    for(icnt=1;icnt<=iNo;icnt++)
    {
        isum = isum * icnt;
        printf("%d",isum);
    }



}

int main()
{

    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);



    return EXIT_SUCCESS;


}