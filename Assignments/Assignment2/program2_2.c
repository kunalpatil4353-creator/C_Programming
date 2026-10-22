#include<stdio.h>
#include<stdlib.h>


void Display(int ino)
{
    int icnt = ino;

    if(ino <= 0)//updater if ino is 0 or negative
    {
        printf("invalid");
    }

    while(icnt >= 1)
    {
        printf("*\n");
        icnt--;
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

/*
Dry run table
Assume ino = 5, so initially icnt = 5.
Step	icnt before condition	icnt >= 1	Action	icnt after decrement
1	5	True	Print *	4
2	4	True	Print *	3
3	3	True	Print *	2
4	2	True	Print *	1
5	1	True	Print *	0
6	0	False	Loop stops	0

*/