#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    if((num%5==0)&& (num%11==0)){
        printf("The Number is divisible by 5 and 11");
    }
    else{
        printf("The Number is not divisible by 5 and 11");
    }

    return 0;
}
