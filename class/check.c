//cheack if  number is less than 10

#include <stdio.h>

int main()
{
    int num  = 0;
    printf ("Your number : ");
    scanf ("%d" , &num);

    if (num < 10)
    {
        printf ("Your number is less than 10 \n");
    }
    else
    {
        printf ("Your number is greter than 10\n");
    }

    return 0;
}