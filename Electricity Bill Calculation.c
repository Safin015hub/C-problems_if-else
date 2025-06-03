#include <stdio.h>
#include <stdlib.h>

int main()
{
    int units;
    float total,surcharge,bill;
    printf("Total Unit used:");
    scanf("%d",&units);

    if(units<=50){
        bill=units*0.50;
    }
    else if(units<=150){
        bill=(50*.50)+((units-50)*0.75);
    }
    else if(units<=250){
        bill=(50*.50)+(100*.75)+((units-150)*1.20);
    }
    else{
        bill=(50*.50)+(100*.75)+(100*1.20)+((units-250)*1.50);
    }
    surcharge=bill*.20;
    total=bill+surcharge;
    printf("Total Electricity Bill is:%.3f",total);
    return 0;
}
