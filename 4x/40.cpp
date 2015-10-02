#include <stdio.h>

int main(){
	int input[3];

	scanf("%d %d %d", &input[0], &input[1], &input[2]);

	for(int i = 0; i < 3; i++){
		if(!(input[i] % 2))
			printf("%d\n", input[i]);
	}

}