#include <stdio.h>
void expX(double x, double E);
int main() {
	double x, E;
	scanf("%lf%lf", &x, &E);
	expX(x, E);
	return 0;
}
void expX(double x, double E) {
	int i = 1; long F = 1, j = 1;
	double exp = 1, prethodniExp, x1 = x;
	do {
		prethodniExp = exp;
		F *= i;
		for (; j < i; j++) {
			x1 *= x;
		}
		exp += x1/(double)F;
		i++;
	} while (exp - prethodniExp > E);
	printf("%lf", exp);
}