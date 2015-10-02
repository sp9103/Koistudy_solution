#include <stdio.h>

int main(){
	int limit;
	int sum = 0;
	int add = 1;

	scanf("%d", &limit);

	while(1){
		sum += add;

		if(sum >= limit){
			printf("%d\n", add);
			break;
		}

		add++;
	}
}