#include <stdio.h>
#include <string.h>

int main() {
	   char s[100], r[100];
	   int n, c, d;

	   printf("Input a string: ");

	   scanf("%s", s);

	   while(strncmp(s, "!stop", 5) != 0) {

		   n = strlen(s);

		   for (c = n - 1, d = 0; c >= 0; c--, d++)
			  r[d] = s[c];

		   r[d] = '\0';

		   printf("%s\n", r);

		   printf("Input a string: ");
		   scanf("%s", s);
	   }

	   return 0;

}

