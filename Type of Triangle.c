#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("Enter Three Sides:\n");
   scanf("%d%d%d",&a,&b,&c);

   if(a==b && b==c){
    printf("The Triangle is Equilateral");
   }
   else if(a==b || b==c || c==a){
    printf("The Triangle is Isosceles ");
   }
   else{
    printf("The Triangle is Scalene");
   }

   return 0;
}
