#include <stdio.h>
#include <math.h>

void qwrt(double a, double b, double c)
{
	double d;
	double x1, x2;
	d = b * b - 4 * a * c;
	if (d < 0)
	{
		printf("\nNo roots\n");
	}
	else if (d == 0)
	{
		x1 = -b / (2 * a);
		printf("\nRoot: %lf\n", x1);
	}
	else if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("\nRoots: %lf %lf\n", x1, x2);
	}
}
