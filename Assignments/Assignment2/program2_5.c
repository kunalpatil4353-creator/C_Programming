#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool even_odd(int ino)
{
    if(ino % 2 == 0)
    {
        return true;
    }
    else{
        return false;
    }



}


int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);


    iRet = even_odd(iValue);

    if(iRet == true)
    {
        printf("even number\n");
    }
    else
    {
        printf("odd number\n");

    }



    return EXIT_SUCCESS;
}