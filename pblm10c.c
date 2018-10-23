/*In this problem, the task is to read a code of a product 1, the number of units of product 1,
the price for one unit of product 1, the code of a product 2, the number of units of product 2
and the price for one unit of product 2. After this, calculate and show the amount to be paid.

Input

The input file contains two lines of data. In each line there will be 3 values: two integers and a
 floating value with 2 digits after the decimal point.*/

#include<stdio.h>



int main()
{
    int numOFproduct1,codeOFproduct1;
    int numOFproduct2,codeOFproduct2;
    float price1,price2,amount;

     scanf("%d %d %f",&codeOFproduct1,&numOFproduct1,&price1);
     scanf("%d %d %f",&codeOFproduct2,&numOFproduct2,&price2);







     amount = (numOFproduct1*price1)+(numOFproduct2*price2);

     printf("VALOR A PAGAR: R$ %.2f\n",amount);


    return 0;

}

