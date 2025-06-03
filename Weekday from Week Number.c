#include <stdio.h>
#include <stdlib.h>

int main()
{
    int week;
    printf("Enter Number (1-7): ");
    scanf("%d",&week);

    if(week==1){
        printf("Saturday");
    }
    else if(week==2){
        printf("Sunday");
    }
    else if(week==3){
        printf("Monday");
    }
    else if(week==4){
        printf("Tuesday");
    }
    else if(week==5){
        printf("Wednesday");
    }
    else if(week==6){
        printf("Thrusday");
    }
    else if(week==7){
        printf("Friday");
    }
    else{
        printf("The given number is invalid");
    }
    return 0;
}
