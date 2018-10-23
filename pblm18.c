/*In this problem you have to read an integer value and calculate the smallest possible
number of banknotes in which the value may be decomposed.
The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.

Input

The input file contains an integer value N (0 < N < 1000000).*/

#include<stdio.h>

int main()
{

    int N,note1,note2;


    scanf("%d",&N);

    note1= N/100;
    note2=N%100;
    printf("\n%d nota(s) de R$ 100,00\n",note1);

    note1=note2/50;
    note2=note2%50;
    printf("%d nota(s) de R$ 50,00\n",note1);


    note1=note2/20;
    note2=note2%20;
    printf("%d nota(s) de R$ 20,00\n",note1);

    note1=note2/10;
    note2=note2%10;
    printf("%d nota(s) de R$ 10,00\n",note1);

    note1=note2/5;
    note2=note2%5;
    printf("%d nota(s) de R$ 5,00\n",note1);

    note1=note2/2;
    note2=note2%2;
    printf("%d nota(s) de R$ 2,00\n",note1);

    note1=note2/1;

    printf("%d nota(s) de R$ 1,00\n",note1);


    return 0;
}
