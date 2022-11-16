#include <stdio.h>
#include <conio.h>
#include <math.h>
float F (float i, float a, float x,float c)
{
	float y;
	if ((x+5<0) && (c=0)) y=1/(a*i);
	else
	if ((x+5>0) && (c!=0)) y=(i-a)/(i-c);
	else y=(10*i)/(c-4);
	return y;
}
int main ()
{
	float xn, xk, dx,i, a,b,c,x;
	do
	{
	printf ("input a,x,c,xn, xk, dx\n");
	scanf("%f%f%f%f%f%f", &a, &x, &c, &xn, &xk, &dx);
	if (c==0 || xn==c || xk==c || xn==xk)
	printf ("input ERROR\n");	
	}
	while ((c==0) || (xn==c) || (xk==c) ||(xn==xk));
	printf ("| x | F |\n");
	for (i=xn; i<=xk; i+=dx)
	printf ("| %5.2f | %5.2f |\n", i, F(i,a,x,c));
	getch ();
	return 0;
}
