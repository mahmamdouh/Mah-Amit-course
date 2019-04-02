#include <stdio.h>
#include <stdlib.h>


void formua (int x , int y);


int main()
{
    int number , skipped ;
    printf("enter the number:");
    scanf("%i",&number);
    printf("enter the skipped:");
    scanf("%i",&skipped);
    formua(number,skipped);
    return 0;
}

void formua (int x , int y)
{
    int i=0;
    printf("formula:");
    for(i=0;i<=x;i++)
    {
        if(i==y)
        {
            continue ;
        }
        printf("%i ",i);
    }
}
