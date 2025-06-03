#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,c;
   printf("Quadratic Equation: 'a^2*x + b*x + c' \n");
   printf("Enter Values of a,b,c:\n");
   scanf("%f%f%f",&a,&b,&c);

   float discriminant=b*b-4*a*c;
   float root1,root2,img;

   if(discriminant>0){
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=(-b-sqrt(discriminant))/(2*a);
    printf("Root1:%.3f\nRoot2:%.3f\n",root1,root2);
   }
   else if(discriminant==0){
    root1=root2=-b/(2*a);
    printf("Root1:%.3f\nRoot2:%.3f\n",root1,root2);
   }
   else if (discriminant<0){
    root1=root2=-b/(2*a);
    img=sqrt(-discriminant) / (2*a);
    printf("Root1:%.3f+i%.3f\nRoot2:%.3f+i%.3f\n",root1,img,root2,img);
   }
    return 0;
}
