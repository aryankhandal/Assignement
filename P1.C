//c program to find area and circumference of circle
#include<stdio.h>
int main()
{
    float r,area,circumference;
    printf("enter the radius of circle \\n");
    scanf("%f",&r);

    area = 3.14 * r * r;
    circumference = 2 * 3.14 * r;

    printf("area of the circle with r %.2f is %.2f\n",r,area);
    printf("circumference of the circle with radius %.2f is %.2f\n",r,circumference);

    return 0;

}