#include <stdio.h>
#include <math.h>
#include "qwrt.h"

int main()
{
	double a, b, c;
	printf("Enter a, b, c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	qwrt(a, b, c);
	return 0;
}
