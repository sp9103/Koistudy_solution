#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char key;
	int Key_Int;
	char buf1[20], buf2[20];

	scanf("%c", &key);
	Key_Int = (int)(key - 'A' + 10);

	for(int i = 1; i <= 15; i++){
		int result = i*Key_Int;

		printf("%c*%s=%s\n",key, strupr(itoa(i,buf1,16)), strupr(itoa(result, buf2, 16)));
	}
}