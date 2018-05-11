#include <stdio.h>
void stampajMatricu(int matrica[100][100], int n, int m);
int main() {
	int n, m, i, j, mat[100][100];
	printf("Unesi dimenizje matrice: ");
	scanf("%d%d", &n, &m);
	printf("Unesi matricu:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	stampajMatricu(mat, n, m);
	return 0;
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