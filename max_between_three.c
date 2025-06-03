#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    printf("Enter Third Number : ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is the largest Number",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest Number",b);

    }
    else if(a==b && b==c){
        printf("All Numbers are Equal");
    }
    else{
        printf("%d is the largest Number",c);
    }
    return 0;
}
