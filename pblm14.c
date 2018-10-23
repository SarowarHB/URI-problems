/*Calculate a car's average consumption being provided the total distance traveled (in Km)
and the spent fuel total (in liters).

Input

The input file contains two values: one integer value X representing the total distance (in Km)
and the second one is a floating point number Y  representing the spent fuel total,
with a digit after the decimal point.*/

#include<stdio.h>

int main()
{
    int X;
    float Y;

    scanf("%d",&X);
    scanf("%f",&Y);
    float distance;

    distance = X/Y;

    printf("%.3f km/l\n",distance);

    return 0;


}
