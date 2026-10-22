#include<stdio.h>
#include<stdlib.h>

void evenfactor(int ino)
{
    if(ino <= 0)
    {
        ino = -ino;
    }

    int icnt = 0;
    for(icnt = 1; icnt<=ino/2;icnt++)
    {
        if(ino% icnt==0)
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

    evenfactor(iValue);




    return 0;
}

