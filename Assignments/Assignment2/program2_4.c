#include<stdio.h>
#include<stdlib.h>

void Display(int ino,int frequency)
{
   int icnt =0;

   for(icnt = 1;icnt<= frequency;icnt++)
   {
        printf("%d\t",ino);
   }
}


int main()
{

    int iValue1 = 0 , iValue2 =0 ;

    printf("Enter a number\n");
    scanf("%d",&iValue1);

    printf("Enter a frequency\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);



    return EXIT_SUCCESS;
}

/*
input : 12 5
1<=5 -> 12
2<=5 -> 12
3<=5 -> 12
4<=5 -> 12
5<=5 -> 12
6<=5 is false-> nothing
*/