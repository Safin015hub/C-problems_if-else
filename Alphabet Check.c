#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);

    if((ch>='a')&&(ch<='z')){
        printf("%c is an Alphabet",ch);
    }
    else if ((ch>='A')&&(ch<='Z')){
         printf("%c is an Alphabet",ch);
    }
    else {
        printf("Not an Alphabet");
    }
    return 0;
}
