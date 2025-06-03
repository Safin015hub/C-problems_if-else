#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter any Character: ");
    scanf("%c",&ch);

    if(((ch>='a')&&(ch<='z'))||((ch>='A')&&(ch<='Z'))){
        printf("It is an Alphabet");
    }
    else if((ch>='0')&&(ch<='9')){
        printf("It is a Digit");
    }
    else{
        printf("It is a Special Character");
    }
    return 0;
}
