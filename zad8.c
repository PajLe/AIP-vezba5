#include <stdio.h>

void stampajMatricu(int matrica[100][100], int n, int m);
void ucitajMatricu(int mat[100][100], int brojRedova, int n);
int sumaIspodSporedne(int mat[100][100], int n);

int main() {
	int B[100][100], C[100][100], n;
	int sumaB, sumaC;
	
	printf("Unesi dimenziju kvadratne matrice:");
	scanf("%d", &n);						//pretpostavimo da su matrice B i C istih dimenzija
	
	printf("Unesi matricu B:\n");
	ucitajMatricu(B, n, n);
	
	printf("Unesi matricu C:\n");
	ucitajMatricu(C, n, n);
	
	sumaB = sumaIspodSporedne(B, n);
	sumaC = sumaIspodSporedne(C, n);
	
	if (sumaB > sumaC) {
		printf("Suma elemenata ispod glavne dijagonale je veca kod matrice B\n");
		stampajMatricu(B, n, n);
	}
	else if (sumaC > sumaB) {
		printf("Suma elemenata ispod glavne dijagonale je veca kod matrice C\n");
		stampajMatricu(C, n, n);
	}
	else
		printf("Suma elemenata ispod glavne dijagonale matrice B je ista kao kod matrice C");
		
	return 0;
}
int sumaIspodSporedne(int mat[100][100], int n) {
	int i;
	int suma = 0;
	for (i = 0; i < n; i++)
		suma += mat[i][n - 1 - i];
	return suma;
}

void stampajMatricu(int matrica[100][100], int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		printf("| ");
		for (j = 0; j < m; j++) {
			printf("%5d ", matrica[i][j]);
		}
		printf("|\n");
	}
}
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona) {
	int i, j;
	for (i = 0; i < brojRedova; i++) {
		printf("\n%d. red:\n", i + 1);
		for (j = 0; j < brojKolona; j++) {
			printf("mat[%d][%d]:", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}