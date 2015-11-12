#include <stdio.h>

int main(){
	int starCount = 1;

	for(int i = 0; i < 8; i++){

		for(int j = 0; j < 7-i; j++){
			printf(" ");
		}

		for(int j = 0; j < starCount; j++){
			printf("*");
		}
		printf("\n");
		starCount += 2;
	}

	return 0;
}