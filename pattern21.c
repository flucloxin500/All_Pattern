

/*
*
**
* *
*  *
*****
*/
#include<stdio.h>
#include<math.h>

int  main (){

    int row , col , n ;

    scanf("%d",&n);

    for ( row = 1 ; row <= n ; row++)
    {
        for ( col = 1 ; col <= n; col++)
        {
            if ( row == n || col == 1 || col == row)
            {
                printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");

    }

    return 0 ;
}




