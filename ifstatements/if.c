#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    float age = 0;
    char name[50] = "";
    bool isStudent = 0;
    
  
//learning if statements

    printf ("Enter you name :");
    fgets (name , sizeof(name) , stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0)
    {
        printf ("Thats not your name!");
        return 0;
    }
    else
    {
        printf ("Enter your age: ");
    }
    scanf ("%f" , &age);

    if (age >= 18)
    {
        printf ("Grown man playing with the terminal...");
    }
    else if (age < 0)
    {
        printf ("YOU ARE KIDDING ME!");

    }
    else if (age == 0)
    {
        printf ("just born am i right?");
    }
    
    else
    {
        printf ("child");
    }
    
    return 0;
}