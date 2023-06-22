/*
	Exercise 2-4. Write an alternate version of squeeze(s1, s2) that deletes
	each caracter in s1 that maches any character in the string s2
*/
#include <stdio.h>
#include <stdlib.h>
#define LIMIT 1000

char * squeeze(char s[LIMIT], char c[LIMIT]);

int main()
{
	char s1[LIMIT], s2[LIMIT];
	printf("Type the first string!\n");
	scanf("%s", &s1);
	printf("Type the second string!\n");
	scanf("%s", &s2);
	char *result = squeeze(s1, s2);
	printf("The squeezed string is: %s", result);
}

char * squeeze(char s[LIMIT], char c[LIMIT])
{
	int j, i, k = 0;
	char copy[LIMIT];
	for(i = 0; s[i] != '\0'; i++)
	{
		for(j = 0; c[j] != '\0'; j++)
		{
			if (c[j] == s[i])
			{
				break;
			}
			if(c[j+1] == '\0')
			{
				copy[k++] = s[i];
			}
		}
	}
	char *squeezed = malloc(sizeof(char) * k);
	for(int p = 0; p < k; p++)
	{
		squeezed[p] = copy[p];
	}
	return squeezed;
}
