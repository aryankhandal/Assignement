//Convert Temperature Celsius into Fahrenheit
#include<stdio.h>
int main()
{
float celsius,fahrenheit;

printf("enter temp in celsius");
scanf("%f",&celsius);

fahrenheit=(celsius*9/5)+32;
printf("%.2f celsius is equivalent to %.2f fahrenheit.\n",celsius,fahrenheit);
return 0;
}