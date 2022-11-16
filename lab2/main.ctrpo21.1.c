//func.c
#include <stdio.h>
#include <locale.h>
#include <math.h>
float y (float x, float a)
{
	if (x>2.5) a=sin(2.3*x-1);
	if (0<= x <= 2.5) a=1-3*logf(fabs(1-x));
	if (x<0) a=pow(x,2)/(2-x);
	return a;
}
int main(void)
{
	float x, a;
	printf("Enter x\n");
	scanf("%f", &x);
	printf("\ny(a)=%f", y(x,a));
	return(0);
}