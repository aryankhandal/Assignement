//Checking Whether You Are Eligible for Voting or Not
#include<stdio.h>
int main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("you are eligible for vote.\n");
    }
    else{
        printf("you are not eligible for vot.\n");
    }
    
    return 0;
}