#include <stdio.h>

int main(){
	int month;

	scanf("%d", &month);

	month %= 12;
	month /= 3;

	if(month == 3)
		printf("fall\n");
	else if(month == 2)
		printf("summer\n");
	else if(month == 1)
		printf("spring\n");
	else
		printf("winter\n");
}