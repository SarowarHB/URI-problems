/*Read two integer values. After this, calculate the product between them and store the result in a variable named PROD. Print the result like the example below. Do not forget to print the end of line after the result, otherwise you will receive �Presentation Error�.
Input

The input file contains 2 integer numbers.
Output

Print PROD according to the following example, with a blank space before and after the equal signal.*/

#include<stdio.h>
int main()
{
    int A,B,M;
    scanf("%d",&A);
    scanf("%d",&B);
    M=A*B;
    printf("PROD = %d\n",M);


}
