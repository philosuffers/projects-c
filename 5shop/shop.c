//the goal of this command line proggram is to create a shopping cart
#include <stdio.h>
#include <string.h>

int main ()
{
    char item[50] = "\0";
    float cost;
    int quantity;
    float total;

    printf ("Enter the Item you would like to purchase? : ");
    fgets(item, sizeof(item) , stdin);
    item[strlen(item) - 1] = '\0';

    

    printf ("Enter the cost of %s. : " , item);
    scanf("%f" , &cost);

    

    printf ("How many %ss would you like to buy? : " , item);
    scanf ("%d", &quantity);

    total = cost * quantity;

    printf ("You are buying %d" , quantity);
    printf (" %s for " , item);
    printf ("%.2f Dollers. \n" , total);

    
    










    return 0;
}