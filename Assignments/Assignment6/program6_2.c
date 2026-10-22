#include<stdio.h>
#include<stdlib.h>

void CheckAdmissions(float fmarks,int iAge)
{

    if(fmarks <0 || iAge < 0 || fmarks>100)
    {
        printf("Invalid input");
    }
    else if(fmarks >= 60 && iAge >= 17)
    {
        printf("Eligible for admissions");
    }
    else 
    {
        printf("not eligible");
    }
    

}


int main()
{

    float fmarks = 0.0f;
    int iAge = 0;

    printf("enter Marks & Age\n");
    scanf("%f %d",&fmarks,&iAge);

    CheckAdmissions(fmarks,iAge);




    return EXIT_SUCCESS;
}