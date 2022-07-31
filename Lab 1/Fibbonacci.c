// Online C compiler to run C program online
#include <stdio.h>
#include "time.h"

void main() {
    // Write C code here
    int n,a=0,b=1,c = a+b;
    double cputime;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    clock_t start,end;
    printf("%d %d ",a,b);
    start = clock();
    for( int i = 3 ; i <= n ; i++)
    {
        printf("%d ",c);
        a = b;
        b = c;
        c = a + b;
    }
    end = clock();

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("\nTime to execute above program %lf",cputime);
 
}