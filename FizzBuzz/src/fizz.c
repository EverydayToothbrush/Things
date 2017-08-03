#include <stdio.h>
#include <stdlib.h>

int main () {

	int x;

	for(x = 1; x < 101; x++) {
		if(x % 3 == 0 && x % 5 == 0) {
			printf("FizzBuzz\n");
		} else if(x % 5 == 0) {
			printf("Buzz\n");
		} else if(x % 3 == 0) {
			printf("Fizz\n");
		} else {
			printf("%d\n", x);
		}
	}

	return 0;

}
