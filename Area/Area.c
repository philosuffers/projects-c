#include <stdio.h>

float l = '\0';
float b = '\0';

void CalculateArea(float l , float b)
{
    float area = l * b;
    printf ("area : %f \n" , area);
}

int main()

{
    printf ( "Length ");
    scanf ("%f" , &l );
    printf ("breadth ");
    scanf ("%f" , &b );
    CalculateArea(l,b);

    return 0;
}