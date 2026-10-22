#include<stdio.h>
#include<stdlib.h>


void Display(int ino)
{
    int icnt = 0;

    if(ino <= 0)//updater if ino is 0 or negative
    {
        printf("invalid");
    }

    while(icnt<=ino)
    {
        printf("*\n");
        icnt++;
    }
}

int main()
{

    int iValue = 0;

    printf("enter a number \n");
    scanf("%d",&iValue);


    Display(iValue);


    return EXIT_SUCCESS;
}