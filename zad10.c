#include <stdio.h>
void stampajMatricu(int matrica[100][100], int n, int m);
void ucitajMatricu(int mat[100][100], int brojRedova, int brojKolona);
void transponuj(int mat[100][100], int dim);

int main() {
	int mat[100][100],n ;
	printf("Unesi dimenziju matrice: ");
	scanf("%d", &n);
	
	printf("Unesi matricu: \n");
	ucitajMatricu(mat, n, n);
	
	printf("Matrica pre transponovanja: \n");
	stampajMatricu(mat, n, n);
	
	printf("Transponovana matrica: \n");
	transponuj(mat, n);
	stampajMatricu(mat, n, n);

	return 0;
}
void transponuj(int mat[100][100], int dim) {
	int pomProm, i, j;
	for (j = 0; j < dim; j++) {
		for (i = 0; i < dim; i++) {
			if (i > j) {
				pomProm = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = pomProm;
			}
		}
	}
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