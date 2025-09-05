// calculate the area, surface area and volume of a Given circle , area , volume respectively
#include <stdio.h>
#include <math.h>

int main()
{
    float rad = 0;
    float area = 0;
    float SurfaceArea = 0;
    float Volume = 0;
    float pi = 3.141596;

    printf("Enter the Radius: ");
    scanf("%f" , &rad);

    area = pi * pow (rad , 2);
    printf ("area of the circle is : %f\n" , area);

    SurfaceArea = pi * 4 * pow (rad , 2);
    printf ("Surface area of the sphere is : %f\n" , SurfaceArea);

    Volume = 1.333333 * pi * pow(rad , 3);
    printf ("volume of the sphere is : %f\n" , Volume);




    return 0;    
}