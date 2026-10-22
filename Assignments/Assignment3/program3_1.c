#include<stdio.h>
#include<stdlib.h>

void printEven(int ino)
{
    if(ino <= 0)
    {
        printf("invalid\n");
        return;
    }
    int icnt =0;
    for(icnt=1; icnt<=ino;icnt++)
    {
        if(icnt%2 == 0)
        {
            printf("%d\n",icnt);
        }

        
    }

}

int main()
{

    int iValue = 0;

    printf("Enter a number\n");
    scanf("%d",&iValue);

    printEven(iValue);




    return 0;
}

/*
uppose the input is 10.
icnt	icnt % 2 == 0	Output
1	False	—
2	True	2
3	False	—
4	True	4
5	False	—
6	True	6
7	False	—
8	True	8
9	False	—
10	True	10
*/