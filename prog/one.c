#include <stdio.h>

int main ()
{
    //program for simple intrest
    float p ;
    float i ;
    int t = 0;
    float compound = 0.00f;
    float total = 0.0f;

    printf ("Enter The principle amount : ");
    scanf ("%f" , &p);

    printf ("Enter the intrest per year: ");
    scanf ("%f" , &i);

    printf ("Enter the years : ");
    scanf ("%d" , &t);


    compound = (p * i * t) / 100.00;
    total = p + compound;

    printf ("total  intrest amount Genrated : %f \n" , compound);

    printf ("total amount Genrated : %f \n" , total);
    return 0;
}