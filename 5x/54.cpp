#include <stdio.h>

int main(){
	int h, b, c, s;

	scanf("%d %d %d %d", &h, &b, &c, &s);

	float result = h / 1024.f * b / 8.0f * c * s / 1024.f;

	printf("%.1f MB", result);

	return 0;
}