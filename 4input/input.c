#include <stdio.h>
#include <string.h>
int main()
{
    //assign you variables right away
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[60] = "";

    printf("Enter YOUR age : ");
    scanf ("%d" , &age);
    age += 5;
    printf ("\nAfter 5 years your age will be %d \n" , age);

    printf ("Enter your GPA: ");
    scanf ("%f" , &gpa);
    gpa *= 20;
    printf ("\nCalculated percentage : %f \n" , gpa);

    printf ("\n Enter YOUR grade :");
    scanf (" %c" , &grade );

    if(grade == 'A')
    {
        printf ("That is a really good Score \n");
    }
    else
    {
        printf ("Could be better \n");
    }
    getchar();
    printf ("Enter your name:");
    fgets(name, sizeof(name) , stdin );
    name[strlen(name) - 1] = '\0';
    printf ("Thank You %s, Your Data is Saved AND WILL BE FED TO CHAT GPT\n" , name);




    return 0;
}