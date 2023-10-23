//C Program to Find Area of Triangle Given Base and HeightC Program to Find Area of Triangle Given Base and Height
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("enter the base of triangle");
    scanf("%f",&base);
    
    printf("enter the height of triangle");
    scanf("%f",&height);
    area = 0.5 * base * height;
    
    printf("area of the triangle with base %.2fand height %.2fis %.2f\n",base,height,area);
    
    return 0;
    
}