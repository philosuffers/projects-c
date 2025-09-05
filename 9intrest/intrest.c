#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compound_interest, amount;
    int n;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percent): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter number of times interest applied per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + (rate / (n * 100))), n * time);
    compound_interest = amount - principal;

    printf("Compound Interest = %.2lf\n", compound_interest);
    printf("Total Amount = %.2lf\n", amount);

    return 0;
}