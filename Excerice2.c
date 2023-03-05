#include <stdio.h>

/* print corresponding Celsius-Fahrenheit Table */

int main()

{
	int celsius, fahr;
	int upper, lower, step;

	upper = 2730;    /* upper is for fahrenreit */
	lower = 0;       /* lower is for celsius */
	step = 273;

      
	printf("Corresponding Celsius-Fahrenheit\n");
	while (celsius <= upper) {
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
}
