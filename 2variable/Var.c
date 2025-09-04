#include <stdio.h>
#include <stdbool.h>

int main()
{

//variable is defined as a cointainer to store information
// for example
int age = 18;
float gpa = 2.3;
double pi = 3.1415973756;
char grade = 'B';
char name[] = "Raghav Saini";
bool isOnline = true;

// use of integers
printf ("my age is %d years\n" , age);

//use of floats
printf ("my gpa is %f. \n" , gpa);

//use of double
printf ("pi is equal to %.15lf \n" , pi);

//use of charachter  teehee ;D
printf ("my grade is %c. \n" , grade);

//use of strings... or a array of charachters..DAMN!
printf ("My maiden name is %s \n" , name);

//bro showwwed of if statements HELL YEAH
    if(isOnline)
{
    printf("You are Online bro!");
}
    else
{
    printf ("You are not online MOTHERF*****");
}

return 0;
}