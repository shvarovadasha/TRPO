#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
int main(void)
{
	float x, y;
	printf("Enter x\n");
	scanf("%f", &x);
	if (x>2.5) y= sin(2.3*x-1);
	if (0<= x <= 2.5) y=1-3*logf(fabs(1-x));
	if (x<0) y=pow(x,2)/(2-x);
	printf("\ny=%f", y);
	return(0);
}
