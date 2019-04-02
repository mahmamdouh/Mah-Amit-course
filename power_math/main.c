#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("enter number then power :\n");
    scanf("%i",&x);
    scanf("%i",&y);
    printf("power of %i  is %i ",x,power(x,y));
    return 0;
}

int power(int x,int y)
{
    int i=0;
    int result=1;
    for(i=1;i<=y;i++)
    {
        result*=x;
    }
    return result;
}
