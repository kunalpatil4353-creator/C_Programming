#include<stdio.h>
#include<stdlib.h>

void Table(int iNo)
{

    int icnt = 0;
    int iTable = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(icnt=1;icnt<=10;icnt++)
    {
        iTable = iNo * icnt;
        printf("%d\t",iTable);
        
    }

     


}

int main()
{

    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    Table(iValue);

    


    return EXIT_SUCCESS;
}