#include <stdio.h>
    int main (){
        int i , sum = 1, number;
        printf ("Enter a number for a factorial : ");
        scanf ("%d" , &number);
            for (i = 1 ; i <= number ; i++){
                sum = sum * i;
            }

            printf ("factorial is : %d " , sum);

            
        return 0;
    }