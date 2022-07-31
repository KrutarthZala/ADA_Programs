#include "stdio.h"
#include "time.h"
int power(int,int);
void main()
{
    int a,b;
    double cputime;
    
    printf("Enter the base number : ");
    scanf("%d",&a);
    
    printf("Enter the power number : ");
    scanf("%d",&b);
    
    clock_t start,end;

    start = clock();
    int ans = power(a,b);
    end = clock();
    
    printf("Answer is %d",ans);
    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("\nTime to execute above program %lf",cputime);
}

int power(int x,int y)
{
    int p =1;
    for ( int i= 1 ; i <= y ; i++)
    {
        p = p * x;
    }
    return p;
}