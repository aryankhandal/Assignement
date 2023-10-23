
//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
    int N;
    printf("enter an integer");
    scanf("%d",&N);
    
    printf("first power of  %d %d\n",N,N);
    printf("second power of %d %d\n",N, N * N);
    printf("third power of %d %d\n",N, N * N * N);
    
    return 0;
    
}