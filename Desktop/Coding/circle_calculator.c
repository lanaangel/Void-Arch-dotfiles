#include <stdio.h>
#include <math.h>

int main () {
	double radius = 0.0;
	double surfaceArea = 0.0;
	double volume = 0.0;
	double area = 0.0;
	// if you want to make a variable unable to be overwritten
	// use "const"
	// a good practice for constants, is to make them UPPERCASE
	const double PI = 3.14159;


	printf("Enter the radius: ");
	scanf("%lf", &radius);

	area = PI * pow(radius, 2);
	surfaceArea = 4 * PI * pow(radius, 2);
	volume = (4.0 / 3.0) * PI * pow(radius, 3);

	printf("Area: %.2lf\n", area);
	printf("Surface Area: %.2lf\n", surfaceArea);
	printf("Volume: %.2lf\n", volume);

	return 0;
}
