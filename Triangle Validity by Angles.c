#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a_1,a_2,a_3;
    printf("Enter three Angles : \n");
    scanf("%d %d %d",&a_1,&a_2,&a_3);

    int sum;
    sum=a_1+a_2+a_3;

    if ((sum==180)&&(a_1>0&&a_2>0&&a_3>0)){
        printf("This Triangle is Valid");
    }
    else{
        printf("The triangle is Invalid");
    }
    return 0;
}
