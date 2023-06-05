/*

5 5 5 5 5 
4 4 4 4 
3 3 3 
2 2 
1

*/
#include<stdio.h>
#include<math.h>

int  main (){
    
    int row , col , n ;

    scanf("%d",&n);

    for ( row = n ; row >= 1 ; row--)
    {
        for ( col = 1 ; col <= row ; col++)
        {
            printf("%d ", row);
        }

        printf("\n");
    }


    return 0 ;
}