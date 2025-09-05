#include <math.h>
#include <stdio.h>
#include<stdlib.h>

int main()
{

     float x  = 9.33;

     float a = sqrt(x);
     printf (" squareroot %f \n" ,a);
     

     float b = pow(x , 2);
     printf ("square %f\n" ,b);
     

     float c = ceil(x);
     printf ("cieling %f\n" ,c);
     

     float d = round(x);
     printf ("round %f\n" ,d);
     

     float e = floor(x);
     printf ("floor %f\n" ,e);
     

     float f = abs(x);
     printf ("abs %f\n" ,f);


     float g =  log(x);
     printf ("log %f\n" ,g);
    

     float h = sin(x);
     printf ("floor %f\n" ,h);
     

     //similarly cos  and tan exist!

    return 0;
}