#include <stdio.h>
    int main (){
        int day;
        printf ("Insert a number : ");
        scanf ("%d" , &day);
            switch (day){
                case 1 : 
                    printf ("this is number 1");
                    break;
                case 2:
                    printf ("this is number 2");
                    break;
                default :
                    printf ("no number exist");
                    break;

            }
           
        return 0;
    }