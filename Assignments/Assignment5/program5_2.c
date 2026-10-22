#include<stdio.h>
#include<stdlib.h>

void checkleapyear(int iyear)
{
    if(((iyear % 4) == 0) && ((iyear % 100) != 0))
    {
        printf("%d : is a leap year\n",iyear);
    }
    else{
        printf("%d : Not a Leap Year\n",iyear);
    }
}

int main()
{

    int iyear = 0;
    

    printf("enter a year\n");
    scanf("%d",&iyear);

    

    checkleapyear(iyear);





    return EXIT_SUCCESS;
}