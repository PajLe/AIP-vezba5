#include <stdio.h>
void stampajNiz(int* B, int dimenzija);
void sortiranje(int* niz, int dimenzija, int smer);

int main() {
	int niz[100], n, i;
	printf("Unesi broj elemenata niza: ");
	scanf("%d", &n);
	printf("Unesi elemnete niza: \n");
	for (i = 0; i < n; i++) {
		printf("Niz[%d]: ", i);
		scanf("%d", &niz[i]);
	}
	printf("Niz pre uredjenja: \n");
	stampajNiz(niz, n);
	printf("\nNiz u neopadajucem redosledu: \n");
	sortiranje(niz, n, 1); // 1 za neopadajuci, -1 za nerastuci
	stampajNiz(niz, n);
	printf("\nNiz u nerastucem redosledu: \n");
	sortiranje(niz, n, -1);
	stampajNiz(niz, n);
	return 0;
}
void sortiranje(int* niz, int dimenzija, int smer) {
	int promena, i, pomProm;
	if (smer == 1) {
		promena = 1;
		while (promena) {
			promena = 0;
			for (i = 0; i < dimenzija - 1; i++) {
				if (niz[i] > niz[i + 1]) {
					pomProm = niz[i];
					niz[i] = niz[i + 1];
					niz[i + 1] = pomProm;
					promena = 1;
				}
			}
		}
	}
	else if (smer == -1) {
		promena = 1;
		while (promena) {
			promena = 0;
			for (i = 0; i < dimenzija - 1; i++) {
				if (niz[i] < niz[i + 1]) {
					pomProm = niz[i];
					niz[i] = niz[i + 1];
					niz[i + 1] = pomProm;
					promena = 1;
				}
			}
		}
	}
}
void stampajNiz(int* B, int dimenzija) {
	int i;
	for (i = 0; i < dimenzija; i++)
		printf("%d ", B[i]);
}