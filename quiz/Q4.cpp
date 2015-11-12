#include <stdio.h>

int main(){
	int a[2][2], b[2][2];
	int c[2][2];

	scanf("%d %d %d %d %d %d %d %d", &a[0][0], &a[0][1], &a[1][0], &a[1][1], &b[0][0], &b[0][1], &b[1][0], &b[1][1]);

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){

			int result = 0;
			for(int k = 0; k < 2; k++){
				result += a[i][k] * b[k][j];
			}

			printf("%d ", result);
		}
		printf("\n");
	}

	return 0;
}