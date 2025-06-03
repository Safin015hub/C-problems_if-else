#include <stdio.h>
#include <stdlib.h>

int main()
{
   int phy,chem,math,bio,comp;
   printf("Enter Number of Five subjects: \n");
   scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&comp);
   float avg=(phy+chem+math+bio+comp)/5;
   printf("Average percentage:%.3f\n",avg);

   if(avg>=90){
    printf("Grade 'A'");
   }
   else if(avg>=80){
    printf("Grade 'B'");
   }
   else if(avg>=70){
    printf("Grade 'C'");
   }
   else if(avg>=60){
    printf("Grade 'D'");
   }
   else if(avg>=40){
    printf("Grade 'E'");
   }
   else{
    printf("Grade 'F'");
   }
    return 0;
}

