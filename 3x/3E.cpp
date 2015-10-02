#include <stdio.h>

int main(){
	int input1, input2;

	scanf("%d %d", &input1, &input2);

	printf("%d\n", (input1 > input2) ? input1 : input2);

	/////////////////////////////////////삼항연산자 안좋은 예///////////////////////////////////////////////
	int temp[3];
	scanf("%d %d %d", &temp[0], &temp[1], &temp[2]);
	printf("%d\n", (temp[0] > temp[1]) ?
		(temp[0] > temp[2] ? temp[0]  : temp[2] )
		: (temp[1] > temp[2] ? temp[1] : temp[2]));

	////////////////////////////////////////////////////////////////////////////////////////////////////////


}