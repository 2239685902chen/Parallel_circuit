#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double q = 0, w = 0, e = 0, r = 0, t = 0, y = 0;
	scanf("%lf%lf", &q, &w);
	e = 1 / q;
	r = 1 / w;
	t = e + r;
	y = 1 / t;
	printf("%lf\n", y);
	return 0;
}