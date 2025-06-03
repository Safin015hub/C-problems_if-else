#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter Second Number : ");
    scanf("%d",&b);

    if(a>=b){
        printf("%d is the largest Number",a);
    }
    else{
        printf("%d is the largest Number",b);
    }
    return 0;
}
