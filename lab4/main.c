#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 15
int main ()
{
  int a[n], i, sum=0, imax=0, imin=0;
  srand (time (NULL));
  for (i=0; i<n; i++)
  {
    a[i] = rand()%16;
    printf ("%d ",a[i]);
     if (a[i] > 0)
     {
  	    sum += a[i];
     }
   }
   printf("\n The sum of the positive elements of the array: %i\n", sum);
   
   max = abs(a[0]);
   min = abs(a[0]);
   for (i=0; i<n; i++)
   {
   	 if (fabs(a[i]) > fabs(a[imax]))
   	 {
   	 	imax = i;
	 }
	if (fabs(a[i]) < fabs(a[imin]))
	 {
	 	imin = i;
	 }
   }
   printf(" The maximum absolute value of element of the array: %d\n", &imax);
   printf(" The minimum absolute value of element of the array: %d\n", &imin);
return (0);
}