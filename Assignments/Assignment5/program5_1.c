#include<stdio.h>
#include<stdlib.h>

void findGreatest(int iValue1,int ivalue2,int iValue3)
{
    if(iValue1>ivalue2 && iValue1>iValue3)
    {
        printf("%d : is greater\n",iValue1);
    }
    else if(ivalue2>iValue3 && ivalue2>iValue1)
    {
        printf("%d : is grater\n",ivalue2);
    }
    else if(iValue3>ivalue2 && iValue3>iValue1)
    {
        printf("%d : is greater\n",iValue3);
    }
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("enter first number\n");
    scanf("%d",&iValue1);

    printf("enter second number\n");
    scanf("%d",&iValue2);

    printf("enter third number\n");
    scanf("%d",&iValue3);

    findGreatest(iValue1,iValue2,iValue3);





    return EXIT_SUCCESS;
}