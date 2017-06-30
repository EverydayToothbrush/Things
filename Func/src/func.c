#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mult (int x, int y);


int main() {
	int x;
	int y;
	char str[4];
	do {
		printf("Input 2 Numbers: ");
		scanf("%d", &x);
		scanf("%d", &y);
		printf("Result: %d\n", mult(x, y));
		scanf("%4s",str);
		getchar();
	} while(strncmp(str, "stop", 4) != 0);
}

int mult (int x, int y) {
	return x * y;
}

