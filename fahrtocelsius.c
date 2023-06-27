#include <stdio.h>

#define UPPER 300
#define STEP 20
#define LOWER 0

int main()
{
	float fahr, celsius;
	fahr = LOWER;

	while(fahr <= UPPER) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("Fahrenheit: %3.0f\tCelsius: %6.1f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
}
