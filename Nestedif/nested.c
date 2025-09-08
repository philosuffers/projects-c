#include <stdio.h>

int main ()
{
    char isStudent = '\0';
    char is18 = '\0';
    printf("Select If you are Student Y/N : ");
    scanf ("%d" ,isStudent);
    rintf("Select If you are above 18 Y/N : ");
    scanf ("%d" ,isStudent);

    if(isStudent == 'y')
    {
        if (is18 == 'y')
        {
            printf ("you are a student and above 18 years old");
        }
        else
        {
            printf ("you are  a student and less than 18 ");
        }
    }
    if(isStudent == 'n')
    {
        if (is18 == 'y')
        {
            printf ("you are not a student and above 18 years old");
        }
        else
        {
            printf ("you are not a student and less than 18 ");
        }
    }




    return 0;

}