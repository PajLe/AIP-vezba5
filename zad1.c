#include <math.h>
#include <stdio.h>
int prost(int broj);

int main() {
	int b = 0, i, N, broj;
	printf("Unesi N: ");
	scanf("%d", &N);
	printf("Unesi brojeve: \n");
	for (i = 0; i < N; i++) {
		scanf("%d", &broj);
		if (prost(broj))
			b++;
	}
	printf("Broj prostih: %d", b);
	return 0;
}
int prost(int A) {
	int i = 2;
	while (i <= sqrt(A) && A % i != 0) {
		i++;
	}
	if (i > sqrt(A) && A != 1)
		return 1;//printf("Broj %d je prost.", A);
	else
		return 0;// printf("Broj %d nije prost.", A);
}