#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define n 15
int main ()
{
  int a[n], i, sum=0, max=0, min=0;
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
   	 if (abs(a[i]) < abs(max))
   	 {
   	 	max = a[i];
	 }
	 if (abs(a[i]) < abs(max))
	 {
	 	min = a[i];
	 }
   }
   printf(" The maximum absolute value of element of the array: %d\n", &max);
   printf(" The minimum absolute value of element of the array: %d\n", &min);
return (0);
}