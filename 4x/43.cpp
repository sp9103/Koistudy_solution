#include <stdio.h>

int main(){
	int input;

	scanf("%d", &input);

	if(input > 100 || input < 0)
		printf("Invalid value\n");
	else if(input > 89)
		printf("A\n");
	else if(input > 69)
		printf("B\n");
	else if(input > 39)
		printf("C\n");
	else
		printf("D\n");
}