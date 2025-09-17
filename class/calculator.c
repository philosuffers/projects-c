//write a program to check implemet all arthmatic operators
#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf ("Enter the First Number: ");
    scanf ("%d" , &num1);

    printf ("Enter the Second Number: ");
    scanf ("%d" , &num2);

    int add = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;

    printf ("Addition %d \n" , add);
    printf ("Subtract %d \n" , sub);
    printf ("Multiplication %d \n" , mul);
    printf ("Division %d \n" , div);
    printf ("Remainder %d \n" , mod);

    return 0;
}