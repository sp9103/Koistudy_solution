#include <stdio.h>

int main(){
	int input;
	scanf("%d", &input);

	//컴퓨터는 2진수를 다루기 때문에...
	input <<= 1;
	printf("%d\n", input);
}