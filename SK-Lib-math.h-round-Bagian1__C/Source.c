#include <stdio.h>      /* printf */
#include <math.h>       /* round, floor, ceil, trunc */
#include <conio.h>

int main() {
	const char* format = "%.1f \t%.1f \t%.1f \t%.1f \t%.1f\n";
	printf("value\tround\tfloor\tceil\ttrunc\n");
	printf("-----\t-----\t-----\t----\t-----\n");
	printf(format, 2.3, round(2.3), floor(2.3), ceil(2.3), trunc(2.3));
	printf(format, 3.8, round(3.8), floor(3.8), ceil(3.8), trunc(3.8));
	printf(format, 5.5, round(5.5), floor(5.5), ceil(5.5), trunc(5.5));
	printf(format, -2.3, round(-2.3), floor(-2.3), ceil(-2.3), trunc(-2.3));
	printf(format, -3.8, round(-3.8), floor(-3.8), ceil(-3.8), trunc(-3.8));
	printf(format, -5.5, round(-5.5), floor(-5.5), ceil(-5.5), trunc(-5.5));
	_getch();
	return 0;
}