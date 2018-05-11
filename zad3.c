#include <stdio.h>
int binToDec(int* bin, int brojCifara);

int main() {
	int i, velicina, binarni[32];
	printf("Unesi broj cifara binarnog broja: ");
	scanf("%d", &velicina);
	printf("Unesi binarni broj kao niz cifara pocevsi od cifre najmanje tezine: \n");
	for (i = 0; i < velicina; i++) {
		scanf("%d", &binarni[i]);
	}
	printf("Ovaj broj u dekadnom sistemu je: %d", binToDec(binarni, velicina));
	return 0;
}
int binToDec(int* bin, int brojCifara){	
	int multiplier = 1, dec = 0;
	int i;
	for (i = 0; i < brojCifara; i++) {
		dec += bin[i] * multiplier;
		multiplier *= 2;
	}
	return dec;

}