#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter three sides : \n");
    scanf("%d %d %d",&a,&b,&c);

    if ((a+b>c)&&(b+c>a)&&(c+a>b)){
        printf("The triangle is Valid ");
    }
    else{
        printf("The triangle is Invalid");
    }
    return 0;
}
