#include <stdio.h>
#include <math.h>

int main ()
{
	//compound interest calculator

	double principal = 0.0;
	double rate = 0.0;
	int years = 0;
	int timesCompounded = 0;
	double total = 0.0;

	printf("Compound Interest Calculator\n");

	printf("Enter the principal (P): ");
	scanf("%lf", &principal);

	printf("Enter the rate percentage (r): ");
	scanf("%lf", &rate);
	rate = rate / 100;

	printf("Enter the time in year(s) (t): ");
	scanf("%d", &years);

	printf("Enter the number of times compounded per year (n): ");
	scanf("%d", &timesCompounded);

	total = 1 + pow(rate / timesCompounded, years) * principal;
	
	printf("The total after %d years is: %.2lf\n", years, total);
}