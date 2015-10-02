#include <stdio.h>

int main(){
	int input;

	scanf("%d", &input);

	if(input >= 0)
		printf("plus\n");
	else
		printf("minus\n");

	if(!(input % 2))
		printf("even number\n");
	else
		printf("odd number\n");

}