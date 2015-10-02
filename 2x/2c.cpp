#include <stdio.h>

int main(){
	int input1, input2;
	int result;

	scanf("%d %d", &input1, &input2);
	printf("%d\n", input1 + input2);
	printf("%d\n", input1 - input2);
	printf("%d\n", input1 * input2);
	printf("%d\n", input1 / input2);
	printf("%d\n", input1 % input2);
	printf("%.2f\n", input1 / (float)input2);
}