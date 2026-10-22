#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Divisible(int ino)
{
    int icnt=0;
    int isum = 0;
    
    for(icnt=1; icnt <= ino/2; icnt++)//the loop stop in its half & the max factor is only till its half    
    {                               
        if((ino % icnt) == 0)    
        {
            isum = isum +icnt;    //factors summation
        }
    }
    
    
}

int main()
{

    int iValue = 0 , bret = false;

    printf("enter number: \n");
    scanf("%d",&iValue);

 
    bret = checkPerfect(iValue);
    //printf("Sum of factors is :%d",iret);

    if(bret == true)
    {
        printf("it is perfect");
    }
    else{
        printf("it is not perfect");
    }


    return EXIT_SUCCESS;
}

/*
TIME COMPLEXITY :   O(N/2)
*/