#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int amt;
	int num;
	int num2;
	int num3;
	printf("How many numbers?: ");
	scanf("%d", &amt);
	if(amt == 1) {
		printf("Enter a number too see odd or even: ");
		scanf("%d", &num);
		(num % 2 == 0) ? printf("%d is Even", num) : printf("%d is Odd", num);
	} else if(amt == 2) {
		printf("Enter 2 numbers to see which is greater: ");
		scanf("%d", &num);
		scanf("%d", &num2);
		printf("%d is greater", ((num > num2) ? num : num2));
	} else if(amt == 3) {
		printf("Enter 3 numbers to see which is greater: ");
		scanf("%d", &num);
		scanf("%d", &num2);
		scanf("%d", &num3);
		(num > num2) ?
			  ((num2 > num3) ?
				  printf("%d is the greatest", num)
				: (num > num3) ?
					  printf("%d is the greatest", num)
					: printf("%d is the greatest", num3))
			: ((num2 > num3) ?
				  printf("%d is the greatest", num2)
				: printf("%d is the greatest", num3));

	}
	return 0;
}
//DOES NOT ACCOUNT FOR EQUALS :(
/* 3 4 5
 * 3 5 4
 * 4 3 5
 * 4 5 3
 * 5 4 3
 * 5 3 4 */
