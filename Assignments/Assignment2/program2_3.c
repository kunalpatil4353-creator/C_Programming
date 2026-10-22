#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    if(ino < 10)
    {
        printf("HELLO\n");
    }
    else{
        printf("Demo\n");
    }

}


int main()
{

    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);


    Display(iValue);



    return EXIT_SUCCESS;
}