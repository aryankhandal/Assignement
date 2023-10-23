//a program to Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    
    if(n<0)
    {
        printf("number is negative");
    }
    if(n>=0)
    {
        printf("number is positve");
    }
    
    return 0;
}