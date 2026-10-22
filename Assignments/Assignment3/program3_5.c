#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool chkvowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' || cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
    {
        return true;
    }
    else{
        return false;
    }
}


int main()
{

    char cValue = '\0';
    bool bret = false;

    printf("enter a chracter\n");
    scanf("%c",&cValue);


    bret = chkvowel(cValue);

    if(bret == true)
    {
        printf("it is Vowel");
    }
    else
    {
        printf("it is not vowel");
    }





    return EXIT_SUCCESS;

}