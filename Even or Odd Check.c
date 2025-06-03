#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    if(num%2==0){
        printf("The Number is Even");
    }
    else{
        printf("The Number is Odd");
    }

    return 0;
}
