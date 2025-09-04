#include <stdio.h>

// to understand the a.r.t.h.e.m.a.t.i.c of C launguage
int main()
{
    int x = 3;
    int y = 16;
    float z = 0;

//addition
    z = x + y;

    printf ("%f\n" , z);
//subtraction
    z = y - x;

    printf ("%f\n" , z);
//division
    z = y / x;

    printf ("%f\n" , z);
//modulas
    z = y % x;
   
    printf ("%f\n" , z);
//reaasigning the same variable 
//protip : can be useful in LOOPS 
// available with +=  , -= , *= , /=.
// multi LINE COMMENT GO Brrrrrrrrrrrrrrrrrrrrrrrrrr
    z+=7 ;
    printf ("%f\n" , z);

    z-=2;

    printf ("%f\n" , z);

    z++;

    printf ("%f\n" , z);

    z--;

    printf ("%f\n" , z);


    
    
    return 0;
}