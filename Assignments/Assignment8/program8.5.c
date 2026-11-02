#include<stdio.h>
#include<stdlib.h>

void TableRev(int iNo)
{

    int icnt = 0;
    int iTable = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(icnt=10;icnt>=1;icnt--)
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

    TableRev(iValue);

    


    return EXIT_SUCCESS;
}