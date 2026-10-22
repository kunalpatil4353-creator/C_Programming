#include<stdio.h>
#include<stdlib.h>

void CheckTraingle(int iSide1,int iSide2,int iSide3)
{
    if(iSide1>0 && iSide2>0 && iSide3>0 && iSide1+iSide2>iSide3 && iSide2 +iSide3 >iSide1 && iSide1+iSide3>iSide2) 
    {
        printf("valid traingle\n");   
    }
    else
    {
        printf("invalid traingle");
    }
    

}


int main()
{

    int iSide1 = 0, iSide2 = 0, iSide3 = 0;
    

    printf("enter three sides\n");
    scanf("%d %d %d",&iSide1,&iSide2,&iSide3);

    CheckTraingle(iSide1,iSide2,iSide3);




    return EXIT_SUCCESS;
}