#include <stdio.h>

int main()
{
	//read a character
	int c, isOneOrZero;
	isOneOrZero = 1;
	c = getchar();
	while(isOneOrZero == 1)
	{
		if(c != EOF)
		{
			isOneOrZero = 1;
			putchar(c);
			c = getchar();
		}
		else
		{
			isOneOrZero = 0;
			printf("getchar != EOF is: %d\n", isOneOrZero);
			break;
		}
		printf("\ngetchar != EOF is: %d\n", isOneOrZero);
	}
}
