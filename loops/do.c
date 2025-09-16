#include <stdio.h>

int main ()

{
    int i;
    do
    {
        printf ("Enter number smaller than 10: ");
        scanf("%d" , &i);
    } while (i >= 10);
    
}