#include<stdio.h>
#include<stdlib.h>

void CheckvotingEligibility(int iAge)
{

    if(iAge >= 18)
    {
        printf("eligible for voting");
    }
    else if(iAge < 18)
    {
        printf("not eligible for voting");
    }
    else if(iAge<0)
    {
        printf("invalid age");
    }

}

int main()
{

    int iAge = 0;

    printf("enter the age\n");
    scanf("%d",&iAge);

    CheckvotingEligibility(iAge);





    return EXIT_SUCCESS;
}