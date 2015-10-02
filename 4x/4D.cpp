#include <stdio.h>

int main(){
	int input;
	int sum = 0;

	scanf("%d", &input);

	for(int i = 0; i <= (input+1) / 2; i++){
		sum += 2*i;
	}

	printf("%d\n", sum);
}