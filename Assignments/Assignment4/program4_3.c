#include<stdio.h>
#include<stdlib.h>

void findGreater(int ifirst,int isecond)
{
  
    if(ifirst > isecond)
    {
        printf("%d : is greater",ifirst);
    }
    else if(isecond > ifirst)
    {
        printf("%d : is greater",isecond);
    }
    else
    {
        printf("both are equal");
    }


}

int main()
{

    int iValue1 = 0 ,ivalue2 =0;
    

    printf("enter first number\n");
    scanf("%d",&iValue1);

    printf("enter second number\n");
    scanf("%d",&ivalue2);

    


    findGreater(iValue1,ivalue2);



    return EXIT_SUCCESS;
}