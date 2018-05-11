#include <stdio.h>
void zameni(int* a, int* b);

int main() {
	int a, b, c;
	printf("Unesi a, b, c, redom:");
	scanf("%d%d%d", &a, &b, &c);
	printf("a, b, c:\n%d, %d, %d", a, b, c);
	printf("\nNakon pomeranja ulevo:\n");
	zameni(&a, &c);
	zameni(&b, &c);
	printf("a, b, c:\n%d, %d, %d", a, b, c);
	return 0;
}
void zameni(int* a, int* b){	
	int pomProm;
	pomProm = *a;
	*a = *b;
	*b = pomProm;
}