#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an Alphabet: ");
    scanf("%c",&ch);

    if((ch>='a')&&(ch<='z')){
        printf("It is Lowercase");
    }
    else if((ch>='A')&&(ch<='Z'))
       {
           printf("It is Uppercase");
       }
       else{
        printf("It is not an Alphabet");
       }

    return 0;
}
