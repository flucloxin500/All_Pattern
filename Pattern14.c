/*
1 
2 4 
3 6 9 
4 8 12 16
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
            //printing elements
            printf("%d " , row * col);//col/row also   
        }
        printf("\n");
    }
    return 0 ;
}