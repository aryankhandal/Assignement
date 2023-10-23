//Program for Finding Greater Between Two Number
#include <stdio.h>
int main() {
    double n2, n1;
    printf("Enter first number: ");
    scanf("%lf", &n1);
    
    printf("Enter second number: ");
    scanf("%lf", &n2);
    if (n1> n2) {
        printf("The first number (%.2lf) is greater than the second number (%.2lf).\n", n1, n2);
    } else if (n2 > n1) {
        printf("The second number (%.2lf) is greater than the first number (%.2lf).\n", n2, n1);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}