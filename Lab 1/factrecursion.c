// Online C compiler to run C program online
#include <stdio.h>
#include "time.h"
int factorial(int);

void main() {
    int n;
    double cputime;
    
    printf("Enter the number : ");
    scanf("%d",&n);
    
    clock_t start,end;
    
    start = clock();
    int ans = factorial(n);
    end = clock();
    
    printf("Factorial of given number is : %d",ans);
    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("\nTime to execute above program %lf",cputime);
}

int factorial(int a)
{
    if( a == 1)
    {
        return 1;
    }
    else
    {
        return factorial(a-1)*a;
    }
}