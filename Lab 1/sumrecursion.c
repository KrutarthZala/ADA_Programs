// Online C compiler to run C program online
#include <stdio.h>
#include "time.h"
int sum(int);
void main() {
	int n;
	double cputime;

	printf("Ente the number : ");
	scanf("%d", &n);

	clock_t start, end;

	start = clock();
	int ans = sum(n);
	end = clock();

	printf("Sum is %d", ans);
	cputime = (double)(end - start) / CLOCKS_PER_SEC;
	printf("\nTime to execute above program %lf", cputime);

}

int sum(int a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return sum(a - 1) + a;
	}
}