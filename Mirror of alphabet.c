#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        char output = 'z'-(ch - 'a') ;
        printf("The mirror of '%c' in the alphabet is '%c'\n",ch,output);
    }
    else if(ch>='A' && ch<='Z'){
        char output = 'Z' -(ch - 'A');
        printf("The mirror of '%c' in the alphabet is '%c'\n",ch,output);
    }
    else{
        printf("Invalid! Please input a letter.\n");
    }
    return 0;
}
