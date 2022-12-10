#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define n 5
void main ()
{
  float a[n];
  int i,j;
  float sum = 0, max, min, p, tmp = 0;
  srand (time (NULL));
  for (i = 0; i < n; i ++)
  {
    a[i] = (float)rand() * (10 - 1 + 1) / RAND_MAX + 1;
    printf (" %f ",a[i]);
     if (a[i] > (float)0)
     {
  	    sum += a[i];
     }
   }
   printf ("\n The sum of the positive elements of the array: %f\n", sum);
   
   max = a[i];
    for(i = 0; i < n; i ++)
	{
  	 if(a[i] > max)
  	  max = fabs(a[i]);
    }	 
   min = a[0];
    for(i = 1; i < n; i ++)
	{
  	 if(a[i] < min)
      min = fabs(a[i]);
    }
	
	p = 1;
	 for (i = 0; i < n; i ++)
	 {
	  if (a[i] > min && a[i] < max)
       p *= a[i];
	 }	 
   printf (" The maximum absolute value of element of the array: %f\n", max);
   printf (" The minimum absolute value of element of the array: %f\n", min);
   printf (" The product of elements between imin and imax: %f\n", p);

     for (i = 0; i < n; i ++)
	 {
	 	for (j = 0; j < n - i - 1; j ++)
	 	{
	 		if(a[j] > a[j + 1])
	 	    {
	 	    	tmp = a[j];
	 	    	a[j] = a[j + 1];
	 	    	a[j + 1] = tmp;
			}
		}
	 }
	 for (i = 0; i < n; i ++)
	 {
	 	printf (" %f ", a[i]);
	 }
return ((void) 0);
}