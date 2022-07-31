#include "stdio.h"
#include "time.h"

void main()
{
    int n;
    clock_t start,end;
    double cputime;

    printf("Enter the array size : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter elements of an array \n");

    start = clock();
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    end = clock();

    cputime = (double) (end - start) / CLOCKS_PER_SEC;
    printf("Time to execute the program %lf",cputime);

    printf("\nYour array is \n"); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    

}