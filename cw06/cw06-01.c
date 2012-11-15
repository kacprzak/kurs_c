// cw06-01
#include <stdio.h>
#include <math.h>  // sqrt

int main(void)
{
  // Dla postaci ax^2 + bx + c = 0
  double a = 2;
  double b = 1;
  double c = -2;

  double delta_sqr = sqrt(b*b - 4*a*c); // sqrt(17) = 4.12

  double x1 = (-b - delta_sqr)/(2*a); // -1.28
  double x2 = (-b + delta_sqr)/(2*a); //  0.78
  
  printf("Dla równania kwadratowego o współczynnikach:\n a = %.2f, b = %.2f i c = %.2f\n", a, b, c);
  printf("Obliczone pierwiastki to:\n x1 = %.2f, x2 = %.2f\n", x1, x2);

  return 0;
}
