#include <stdio.h>
void minimax(int* X, int N, int* imax, int* imin);

int main() {
	int i, N, X[32];
	int imax = 0, imin = 0, *Pimax = &imax, *Pimin = &imin;
	printf("Unesi broj elemenata niza: ");
	scanf("%d", &N);
	printf("Unesi elemente niza: \n");
	for (i = 0; i < N; i++) {
		scanf("%d", &X[i]);
	}
	minimax(X, N, Pimax, Pimin);
	printf("Max: %d\nMin: %d", X[imax], X[imin]);
	return 0;
}
void minimax(int* X, int N, int* imax, int* imin){
	int i;
	for (i = 0; i < N; i++) {
		if (X[i] > X[*imax])
			*imax = i;
		if (X[i] < X[*imin])
			*imin = i;
	}
}