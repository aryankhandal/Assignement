//Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
    char c,uppercase,lowercase;
    printf("enter the character");
    scanf("%c",&c);
    
    lowercase = (c=='a' || c=='e' || c=='i'|| c=='o'|| c=='u');
    uppercase = (c=='A' || c=='E' || c=='I'|| c=='O'|| c=='U');
    
    if(lowercase||uppercase)
        printf("%c,is vowel.\n",c);
    else
        printf("%c,is not vowel.\n",c);
        
    return 0;    
}