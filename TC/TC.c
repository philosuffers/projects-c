//Temprature Converter Program
#include <stdio.h>

int main()
{
    char Choice = '\0';
    char Choice2 = '\0';
    float t = 0.0f;
    printf ("Celcuis, farenhight , and kelvin Convertor C F K respectively \n");

    printf ("ENTER Your UNIT ");
    scanf ("%c" , &Choice);
    getchar();
    printf ("Enter unit to Convert to ");
        scanf ("%c" , &Choice2);

    switch (Choice)
    {
    case 'C':
        
         if (Choice2 == 'F')
         {
            printf ("ENTER TEMPRATURE :");
            scanf ("%f" , &t);
            t = (t * 1.8) + 32;
            printf ("Converted Temprature %f\n" , t);

         }
         else if (Choice2 == 'K')
         {
           printf ("ENTER TEMPRATURE :");
            scanf ("%f" , &t);
            t = t  + 273.15;
            printf ("Converted Temprature %f\n" , t); 
         }
          else
         {
            printf ("Please ENTER F or K");
         }
         break;
    case 'F':
        
         if (Choice2 == 'C')
         {
            printf ("ENTER TEMPRATURE :");
            scanf ("%f" , &t);
            t = (t -32) / 1.8;
            printf ("Converted Temprature %f\n" , t);

         }
         else if (Choice2 == 'K')
         {
           printf ("ENTER TEMPRATURE :");
            scanf ("%f" , &t);
            t = ((t - 32) / 1.8) + 273.15;
            printf ("Converted Temprature %f\n" , t); 
         }
          else
         {
            printf ("Please ENTER C or K");
         }
         break;
    case 'K':
        
         if (Choice2 == 'F')
         {
            printf ("ENTER TEMPRATURE :");
            scanf ("%f" , &t);
            t = ((t- 275.15) * 1.8) + 32;
            printf ("Converted Temprature %f\n" , t);

         }
         else if (Choice2 == 'C')
         {
           printf ("ENTER TEMPRATURE :");
            scanf ("%f" , &t);
            t = t  - 273.15;
            printf ("Converted Temprature %f\n" , t); 
         }
          else
         {
            printf ("Please ENTER F or K");
         }
         break;


    
    default:
        break;
    }
getchar();


    return 0;
}