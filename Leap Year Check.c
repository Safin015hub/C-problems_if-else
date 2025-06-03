#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);

    if (((year%4==0)&&(year!=100)) ||(year%400==0)){
        printf("The year is Leap year");
    }
    else{
        printf("The year is not a Leap year");
    }

    return 0;
}
