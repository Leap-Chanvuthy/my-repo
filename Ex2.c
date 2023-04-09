//Write a C Program to input two angles from user and find third angle of the triangle.
#include <stdio.h>

int main()
{
    int a, b, c;

    /* Input two angles of the triangle */
    printf("Enter two angles of triangle: ");
    scanf("%d%d", &a, &b);

    /* Compute third angle */
    c = 180 - (a + b);

    /* Print value of the third angle */
    printf("Third angle of the triangle = %d", c);

    return 0;
}
