#include <stdio.h>
#include <math.h>
    int main(){
        float a , b ,c , delta , x1 , x2 , real_part , img_part;
        printf("Enter value a b c : ");
        scanf("%f %f %f" , &a , &b , &c);
        delta = b*b - 4 *a*c;
        printf ("delta = %f \n" , delta);
            if (delta == 0){
                x1 = x2 = -b/2*a;
                printf ("x1 = x2 = %f ", x1);
            }
            else if (delta > 0){
                x1 = (-b + sqrt(delta))/2*a;
                x2 = (-b - sqrt(delta))/2*a;
                printf ("There are two roots x1 = %f and x2 = %f " , x1 , x2);
            }
            else if (delta < 0){
                real_part = -b/2*a;
                img_part = sqrt(-delta)/2*a;
                printf ("There are two roots in complex plane\n");
                printf ("x1 = %f + %fi \n" , real_part , img_part);
                printf ("x2 = %f - %fi " , real_part , img_part);

                // this is a commit changes from master branch
                
                // Commit changes from Github

            }
    }
