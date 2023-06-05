
/*
*********
 *******
  *****
   ***
    *

*/
#include<stdio.h>
#include<math.h>

int  main (){

    int row , col , n ;

    scanf("%d",&n);

    for ( row = n ; row >= 1 ; row--)
    {
        for ( col = 1 ; col <= n - row ; col++)
        {
            //spaces
            printf(" ");//col/row also
        }
        for ( col = 1 ; col <=2*row -1 ; col++)
        {
            //star
            printf("*");//col/row also
        }
        printf("\n");
    }
    return 0 ;
}
