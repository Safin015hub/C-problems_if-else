#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the Number : ");
    scanf("%d",&num);

    if (num>0){
        printf("%d is Positive",num);
    }
    else if(num<0){
        printf("%d is Negative",num);

    }
    else {
        printf("The Number is Zero");
    }
    return 0;
}
