#include "stdio.h"
#include "time.h"

void main()
{
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    clock_t start,end;
    double cputime;
    
    start = clock();
    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + i;
    }
    end = clock();
    
    printf("Sum of 1 to given number is %d ",sum);
    
    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    
    printf("\nTime to execute above program %lf",cputime);
}