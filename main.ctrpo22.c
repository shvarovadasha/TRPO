#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	int n,x;
	printf("Menu:\n");
	printf("1-decimeter\n");
	printf("2-kilometer\n");
	printf("3-meter\n");
	printf("4-millimeter\n");
	printf("5-centimeter\n");
	printf("Your choice?\n");
	scanf("%d", &n);
	printf("Enter length of the segment L\n");
	scanf("%f", &x);
	switch (n)
	{
		case 1:
			printf("Length of the segment L in meters %f\n", x/10);
			break;
		case 2:
			printf("Length of the segment L in meters %f\n", x*1000);
			break;
		case 3:
			printf("Length of the segment L in meters %f\n", x);
			break;
		case 4:
			printf("Length of the segment L in meters %f\n", x/1000);
			break;
		case 5:
			printf("Length of the segment L in meters %f\n", x/100);
			break;                    
		case 6: return; break;
		default: printf("Invalid value");	
	}
}
