#include <stdio.h>

int main(){
	int a, b;

	scanf("%d %d", &a, &b);

	for(int i = b-1; i > a; i--){
		printf("%d ", i);
	}

	return 0;
}