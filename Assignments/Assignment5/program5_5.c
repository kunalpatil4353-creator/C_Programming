#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("uppercase alphabet");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("LowerCase alphabet");
    }
    else if(cValue >= 0 || cValue<= 9)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Character");
    }
}

int main()
{

    char cValue = '\0';

    printf("enter a character\n");
    scanf("%c",&cValue);


    CheckCharacterType(cValue);




    return EXIT_SUCCESS;
}