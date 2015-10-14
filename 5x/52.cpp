#include <stdio.h>

int main(){
	int count;

	scanf("%d", &count);

	for(int i = 1; i <= count; i++){
		if( i % 3 == 0)	printf("X ");
		else			printf("%d ", i);
	}
	printf("\n");

	return 0;
}