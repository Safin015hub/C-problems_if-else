#include<stdio.h>

int main()
{
    float basic_s,da,hra;
    printf("Enter basic salary:");
    scanf("%f",&basic_s);

    if(basic_s<0)
    {
        printf("Given salary is Invalid");
    }
    else if(basic_s<=10000)
    {
        hra=basic_s*(20.0/100);
        da=basic_s*(80.0/100);
        printf("Gross salary:%.2f",basic_s+hra+da);
    }
    else if(basic_s<=20000)
    {
        hra=basic_s*(25.0/100);
        da=basic_s*(90.0/100);
        printf("Gross salary:%.2f",basic_s+hra+da);
    }
    else if(basic_s>20000)
    {
        hra=basic_s*(30.0/100);
        da=basic_s*(95.0/100);
        printf("Gross salary:%.2f",basic_s+hra+da);
    }
    return 0;
}
