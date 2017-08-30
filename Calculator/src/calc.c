#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int temptof(int tempc);
float sphere(float radius);
float speed(float kmh);
int main() {
	char modes[10];
LINE7:
	printf("What do you want to do?\n");
	printf("TempCalc\n");
	printf("SphereVol\n");
	printf("UnitCalc (Speed)\n");
	printf("HourCalc\n");
	printf("Exit\n");
	printf("Choice: ");
	scanf("%s", modes);
	int tempc;
	while(strcmp(modes, "Exit") != 0) {
		char backopt[10];
		float radius;
		float kmh;
		int minutes;
		switch (modes[0]) {
		//TEMPERATURE
			case 'T':
				if(strcmp(modes, "TempCalc") == 0) {
					do {
						printf("Enter a Temperature in Celsius: ");
						scanf("%d", &tempc);
						printf("Your Temperature in Fahrenheit: %d\n", temptof(tempc));
						printf("Back to Mode Select?: ");
						scanf("%10s", backopt);
						getchar();
					} while (strncmp(backopt, "Yes", 10) != 0);
					goto LINE7;
				} else {
					goto LINE42;
				}
				break;
		//SPHEREVOLUME
			case 'S':
				if(strcmp(modes, "SphereVol") == 0) {
					do {
						printf("What is the Radius?: ");
						scanf("%f", &radius);
						printf("Volume is approximately %f\n", sphere(radius));
						printf("Back to Mode Select?: ");
						scanf("%10s", backopt);
						getchar();
					} while(strncmp(backopt, "Yes", 10) != 0);
					goto LINE7;
				} else {
					goto LINE42;
				}
				break;
		//DISTANCECONVERT
			case 'U':
				if(strcmp(modes, "UnitCalc") == 0) {
					do {
						printf("What is the Speed in Kilometers per Hour?: ");
						scanf("%f", &kmh);
						printf("Your speed in MPH is approximately: %f\n", speed(kmh));
						printf("Back to Mode Select?: ");
						scanf("%10s", backopt);
						getchar();
					} while(strncmp(backopt, "Yes", 10) != 0);
					goto LINE7;
				} else {
					goto LINE42;
				}
				break;
		//HOURCONVERTING
			case 'H':
				if(strcmp(modes, "HourCalc") == 0) {
					do {
						printf("How many minutes?: ");
						scanf("%d", &minutes);
						int hrs = (minutes / 60);
						int min = (minutes % 60);
						printf("That is:\n");
						printf("%d Hours\n", hrs);
						printf("%d Minutes\n", min);
						printf("Back to Mode Select?: ");
						scanf("%10s", backopt);
						getchar();
					} while(strncmp(backopt, "Yes", 10) != 0);
					goto LINE7;
				} else {
					goto LINE42;
				}
				break;
		LINE42:
			default:
				printf("That is not a Mode\n");
				goto LINE7;


		}
	}
	return 0;
}

int temptof(int tempc) {
	return (tempc * 1.8) + 32;
}

float sphere(float radius) {
	return (pow(radius, 3) * M_PI * 4) / 3;
}

float speed(float kmh) {
	return kmh * 0.62;
}




