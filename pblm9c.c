/*Make a program that reads a seller's name, his/her fixed salary and the sale's
total made by himself/herself in the month (in money). Considering that this seller
receives 15% over all products sold, write the final salary (total) of this seller at
the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive
“Presentation Error”.

- Don’t forget the blank spaces.
Input

The input file contains a text (employee's first name), and two double precision values,
that are the seller's salary and the total value sold by him/her.*/

#include<stdio.h>

#include<string.h>


int main()
{
    char employees_first_name;
    double fixed_salary;
    double total_sell;

     scanf("%s",&employees_first_name);
     scanf("%lf",&fixed_salary);
     scanf("%lf",&total_sell);


     double TOTAL;
     TOTAL= fixed_salary+(total_sell*0.15);

     printf("TOTAL = R$ %.2lf\n",TOTAL);


    return 0;

}

