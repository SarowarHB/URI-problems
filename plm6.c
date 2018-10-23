/*Read three values (variables A, B and C), which are the three
student's grades. Then, calculate the average, considering that grade A has weight 2,
 grade B has weight 3 and the grade C has weight 5. Consider that each grade can go
 from 0 to 10.0, always with one decimal place.

Input

The input file contains 3 values of floating points with one digit after the decimal point.*/

#include<stdio.h>

int main()
{
    float A,B,C;
    double MEDIA;

    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);

    MEDIA=((A*2)+(B*3)+(C*5))/(2+3+5);

    printf("MEDIA = %.1lf\n",MEDIA);
}
