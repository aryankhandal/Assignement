//Program to convert a person's name in abbreviated form
#include <stdio.h>

int main() {
    char first[30], middle[30], last[30];

    // Getting input from the user
    printf("Enter your first name: ");
    scanf("%s", first);
    
    printf("Enter your middle name: ");
    scanf("%s", middle);
    
    printf("Enter your last name: ");
    scanf("%s", last);

    // Displaying the abbreviated name
    printf("Abbreviated name: %c. %c. %s\n", first[0], middle[0], last);

    return 0;
}