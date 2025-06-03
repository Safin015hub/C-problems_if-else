#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount;
    int n_500 = 0, n_100 = 0, n_50 = 0, n_20 = 0, n_10 = 0, n_5 = 0, n_2 = 0, n_1 = 0;


    printf("Enter Amount: ");
    scanf("%d",&amount);

    if(amount>=500){
        n_500=amount/500;
        amount=amount-(n_500*500);
    }
    if(amount>=100){
        n_100=amount/100;
        amount=amount-(n_100*100);
    }
    if(amount>=50){
        n_50=amount/50;
        amount=amount-(n_50*50);
    }
     if(amount>=20){
        n_20=amount/20;
        amount=amount-(n_20*20);
    }
     if(amount>=10){
        n_10=amount/10;
        amount=amount-(n_10*10);
    }
     if(amount>=5){
        n_5=amount/5;
        amount=amount-(n_5*5);
    }
     if(amount>=2){
        n_2=amount/2;
        amount=amount-(n_2*2);
    }
    if(amount>=1){
        n_1=amount/1;
        amount=amount-(n_1*1);
    }
    printf("Total Number of notes are below:\n");
    printf("%d notes of 500\n",n_500);
    printf("%d notes of 100\n",n_100);
    printf("%d notes of 50\n",n_50);
    printf("%d notes of 20\n",n_20);
    printf("%d notes of 10\n",n_10);
    printf("%d notes of 5\n",n_5);
    printf("%d notes of 2\n",n_2);
    printf("%d notes of 1\n",n_1);
    return 0;
}
