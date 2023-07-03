#include <stdio.h>

int main(){
	int c, count_blank, count_tab, count_new_line;
	while ((c = getchar()) != EOF){
		if (c == '\n')
			count_new_line += 1;
		if (c == ' ')
			count_blank += 1;
		if (c == '\t' || c == '\v')
			count_tab += 1;
	}
	printf("\nThe count of spaces is: %d\n", count_blank);
	printf("The count of tabs is: %d\n", count_tab);
	printf("The count of new lines is: %d\n", count_new_line);
}
