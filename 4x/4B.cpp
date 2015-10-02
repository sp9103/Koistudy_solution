#include <stdio.h>

int main(){
	char input;

	scanf("%c", &input);

	for(int i = (int)'a'; i <= (int)input; i++){
		printf("%c ", i);
	}
	printf("\n");
}