/*
*
**
***
****
*****
****
***
**
*
*/

#include<stdio.h>
#include<math.h>

int  main (){
    
    int row , col , n ;

    scanf("%d",&n);

    for ( row = 1 ; row <= n ; row++)
    {
        for ( col = 1 ; col <= row ; col++)
        {
            printf("*");//col also
        }

        printf("\n");
    }
    for ( row = n-1 ; row >= 1 ; row--)
    {
        for ( col = 1 ; col <= row ; col++)
        {
            printf("*");//col also
        }

        printf("\n");
    }


    return 0 ;
}