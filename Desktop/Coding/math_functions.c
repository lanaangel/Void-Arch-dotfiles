#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () {	
	int squarerootExample = 9;
	int powerExample = 2;
	float roundExample = 3.14;
	int absoluteExample = -3;
	float logExample = 3;
	float sinTrigonometry = 45;

	//square root
	squarerootExample = sqrt(squarerootExample);

	// power (powerExample²), changing the number to 4 would output 2*2*2*2 (2^4)
	powerExample = pow (powerExample, 2);

	//round to the closest integer with "round"
	//round up with "ceil"(ceiling)  roundExample = ceil(roundExample) -> 4
	//round down with "floor"  roundExample = floor(roundExample) -> 3
	roundExample = round(roundExample);

	//the Absolute Value funcion (abs) will output the distance from 0 as a positive number
	absoluteExample = abs(absoluteExample);

	//use the "log" function to display the natural logarithm of a number
	logExample = log(logExample);

	//for trigonomety, the basic functions are "cos(); sin(); tan()"
	sinTrigonometry = sin(sinTrigonometry);

	printf("the square root of 9 is: %+9d\n", squarerootExample);
	printf("2 to the power of 2 is: %d\n", powerExample);
	printf("pi rounded to the closest integer is: %+.2f\n", roundExample);
	printf("the distance from zero is: %d\n", absoluteExample);
	printf("the natural logarithm is: %+.4f\n", logExample);
	printf("the sine is: %+.2f\n", sinTrigonometry);

	return 0;
}