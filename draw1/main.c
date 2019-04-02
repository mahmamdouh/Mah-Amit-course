#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raw=7 ;
    int D_p =1;

    for(int i=1 ; i<=raw;i++ )
    {
        for(int c=1;c<=D_p;c++)
        {
          printf("*");
        }
        printf("\n");
        D_p++;
    }


    return 0;
}
