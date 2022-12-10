#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
  float a, b, c, xn, xk, dx, i, F;
  do
  {
    printf ("Input a, b, c, xn, xk, dx\n");
    scanf ("%f%f%f%f%f%f", &a, &b, &c, &xn, &xk, &dx);
      if (xn == 0 || xk == 0 ||  xn == xk) 
       printf ("input ERROR\n");
   }
   while ((xn == 0) || (xk == 0) ||(xn == xk));
   printf ("|   x   |   F   |\n");
    for (i = xn; i <= xk; i += dx)
    {
      if ((i + 5 < 0) && (c = 0)) 
        F = 1 / (a * i) - b;
          else if ((i + 5 > 0) && (c != 0)) 
            F = (i - a) / i;
             else 
              F = 10 * i / (c - 4);
      printf ("| %5.2f | %5.2f |\n", i, F);
    }
    getch ();
    return 0;
}