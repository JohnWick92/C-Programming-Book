#include <stdio.h>

#define UPPER 300
#define STEP 20
#define LOWER 0

int main()
{
	float fahr, celsius;
	celsius = LOWER;

	while(celsius <= UPPER) {
		fahr = (celsius) * (9.0/5.0) + 32.0;
		printf("Celsius: %3.0f\tFahrenheit: %6.1f\n", celsius, fahr);
		celsius += STEP;
	}
}
