#include <stdio.h>
#include <stdlib.h>

int main()
{
   int month;
   printf("Enter Month (1-12): ");
   scanf("%d",&month);

   if(month==1){
    printf("January:31 days");
   }
   else if(month==2){
    printf("February:28 days or 29 days if leap year");
   }
    else if(month==3){
    printf("March:31 days");
   }
   else if(month==4){
    printf("April:30 days");
   }
   else if(month==5){
    printf("May:31 days");
   }
   else if(month==6){
    printf("June:30 days");
   }
   else if(month==7){
    printf("July:31 days");
   }
   else if(month==8){
    printf("August:31 days");
   }
   else if(month==9){
    printf("September:30 days");
   }
   else if(month==10){
    printf("October:31 days");
   }
   else if(month==11){
    printf("November:30 days");
   }
   else if(month==12){
    printf("December:31 days");
   }
   else{
    printf("The given month is invalid");
   }
    return 0;
}
