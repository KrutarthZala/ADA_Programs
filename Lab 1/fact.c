#include "stdio.h"
#include "time.h"

void main()
{
    int n,fact = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    clock_t start,end;
    double cputime;
    
    start = clock();
    for(int i = 1 ; i <= n ; i++)
    {
        fact = fact * i;
    }
    end = clock();
    
    printf("Factorial of given number is %d ",fact);
    
    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    
    printf("\nTime to execute above program %lf",cputime);
}