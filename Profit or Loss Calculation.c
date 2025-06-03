#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c_p,s_p;
    printf("Enter Cost Price: ");
    scanf("%d",&c_p);
    printf("Enter Selling Price: ");
    scanf("%d",&s_p);

    if(c_p<s_p)
    {
        printf("Profit:%d\n",s_p-c_p);
    }
    else if(c_p>s_p)
    {
        printf("Loss:%d\n",c_p-s_p);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}
