/*Make a program that reads 3 integer values and present the greatest one
followed by the message "eh o maior".
Use the following formula:

Input

The input file contains 3 integer values.*/

#include<stdio.h>

int main()

{
    int a,b,s;

    scanf("%d%d%d",&a,&b,&s);

    if(a>b&&a>s)
    {
        printf("%d eh o maior\n",a);
    }
     else if(b>s&&b>a)
    {
       printf("%d eh o maior\n",b);
    }


    else
        printf("%d eh o maior\n",s);

        return 0;
}
