//C Program to Find Percentage of 5 Subjects
#include<stdio.h>
int main()
{
    float subject1,subject2,subject3,subject4,subject5,total,percantage;
    
    printf("enter marks of subject1");
    scanf("%f",&subject1);
    
    printf("enter marks of suject2");
    scanf("%f",&subject2);
    
    printf("enter marks of subject3");
    scanf("%f",&subject3);
    
    printf("enter marks of subject4");
    scanf("%f",&subject4);
    
    printf("enter marks of suject5");
    scanf("%f",&subject5);
    
    total=subject1+subject2+ subject3+ subject4+ subject5;
    percantage=(total/500)*100;
    
    printf("the percantage is: %.2f%%\n",percantage);
    
    return 0;
    
}