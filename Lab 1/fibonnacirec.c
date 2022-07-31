#include "stdio.h"
#include "time.h"

void fibrec(int);

void main()
{
    int n;
    double cputime;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("0 1 ");
    clock_t start,end;

    start = clock();
    fibrec(n - 2);
    end = clock();

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("\nTime to execute the program %lf",cputime);
}

void fibrec(int a)
{
    static int n1 = 0, n2 = 1, add;

    if (a > 0)
    {
        add = n1 + n2;
        n1 = n2;
        n2 = add;
        printf("%d ", add);
        fibrec(a - 1);
    }
}