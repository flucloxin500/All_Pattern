/*
    1
   121
  12321
 1234321
123454321
*/
#include<stdio.h>
#include<math.h>

int  main (){

    int row , col ;
    int n, cnt= 0;

    scanf("%d",&n);

    for ( row = 1 ; row <= n ; row++)
    {
        for ( col = 1 ; col <= n - row; col++)
        {
            printf(" ");
        }
        for ( col = 1 ; col <= row; col++)
        {
            printf("%d", col);
        }
        for ( col = row-1 ; col >= 1; col--)
        {
            printf("%d", col);
        }

        printf("\n");

    }

    return 0 ;
}






