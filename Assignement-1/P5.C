//Program to calculate simple intrest
#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Getting input from the user
    printf("Enter the principal amount (in units of currency): ");
    scanf("%f", &principal);
    
    printf("Enter the rate of interest (in percentage, e.g., 7.5 for 7.5%%): ");
    scanf("%f", &rate);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculating the simple interest
    interest = (principal * rate * time) / 100;

    // Displaying the result
    printf("The simple interest is: %.2f\n", interest);

    return 0;
}