#include <stdio.h>
void deliociN(int broj, int* niz, int* PbrElemenata);
int main() {
	int B, delioci[100], brElemenata = 0, i;
	printf("Unesi prirodan broj B: ");
	scanf("%d", &B);
	deliociN(B, delioci, &brElemenata);
	printf("Delioci broja %d su:\n", B);
	for (i = 0; i < brElemenata; i++)
		printf("%d ", delioci[i]);
	return 0;
}
void deliociN(int broj, int* niz, int* PbrElemenata) {
	int i, j = 0;
	for (i = 1; i <= broj; i++) {
		if (broj % i == 0) { // ako je broj deljiv sa i
			niz[j] = i;		// stavimo taj broj u niz 
			++*PbrElemenata; // povecamo vrednost u memorijskoj lokaciji na koju pokazuje *PbrElemenata
			j++;
		}		
	}
}