#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("select mode : \n 1-calculator \n 2-cinema ticket \n");
    scanf("%i",&x);
    adv_calc(x);
    return 0;
}

 void adv_calc(int x)

{

    if(x==1)
    {
        int a,b;
        printf("enter two number to add , sub , multiply \n");
        scanf("%i",&a);
        scanf("%i",&b);
        printf(" (add)=%i \n",addition(a,b));
        printf(" (sub)=%i \n",subtraction(a,b));
        printf(" (mul)=%i \n",multiplication(a,b));

    }
    else if(x==2)
    {
        int k;
        printf("pick your ticket (1,2,3 \n");
        scanf("%i",&k);
        if(k==1)
        {
        printf("normal ticket 50 LE");
        }
        else if(k==2)
        {
        printf("vip ticket ");
        }
        else if(k==3)
        {
        printf("vip + pop corn");
        }
        else
        {
        printf("wrong selection");
        }
    }
    else
    {
        printf("wrong selection");
    }
}
 int addition (int x , int y)
 {
     return x+y;
 }

  int subtraction (int x , int y)
 {
     return x-y;
 }

  int multiplication (int x , int y)
 {
     return x*y;
 }

