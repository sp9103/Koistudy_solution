#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int arr[20];
	int ans[20];

	for(int i = 0; i < 20; i++){
		arr[i] = rand() % 100;
		printf("%d\t", arr[i]);
	}

	//Á¤·Ä
	int max;
	int idx = -1;
	for(int i = 0; i < 20; i++){
		max = -1;

		for(int j = 0; j < 20; j++){
			if(max < arr[j]){
				max = arr[j];
				idx = j;
			}
		}

		arr[idx] = -1;
		ans[i] = max;
	}

	for(int i = 0; i < 20; i++){
		printf("%d\t", ans[i]);
	}
	printf("\n");

	return 0;
}