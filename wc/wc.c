#include <stdio.h>

int main()
{
    printf ("Weight Conversion Calculator \n SELECT 1 or 2 \n 1)Kilogram into Pounds \n 2)Pounds into Kilogram \n");
    
    int select = 0;

    scanf("%d" , &select);

    if(select == 1)
    {
        float k = 0.0;
        printf("Enter Kilograms : ");
        scanf("%f" , &k);
        k *= 2.024;
        printf ("THE pound is %f \n" , k);
    }
    else if (select == 2)
    {
        float k = 0.0;
        printf("Enter Pounds : ");
        scanf("%f" , &k);
        k /= 2.024;
        printf ("THE Kilogram is %f \n" , k);
    }
    else
    {
        printf ("NAHHHH!\n");
    }
    
    
    return 0;
}