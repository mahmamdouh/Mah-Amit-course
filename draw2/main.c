#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raw , colum ;
    int mid_p ;
    printf("enter grid dimensions : raw , colum(odd):");
    scanf("%i",&raw);
    scanf("%i",&colum);
    //colum=raw+4;

    while(colum%2==0)
    {
    printf("not odd ; try again:");
    scanf("%i",&colum);
    }
    mid_p=((colum-1)/2)+1;
    int dot=0;
    int p_p=1;
   // printf("%i",D_p=9%5);

    for(int i=1 ; i<=raw;i++ )
    {
        dot=(i*2)-1;
        for(int c=1;c<=colum;c++)
        {
           if(c<mid_p)
           {
              printf(" ");
           }
        }
        for(int y=1;y<=dot;y++)
        {
           //("%i",dot);
           printf("*");
        }
        mid_p--;
        printf("\n");

    }


    return 0;
}
