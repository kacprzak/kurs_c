// cw06-02
#include <stdio.h>
#include <math.h>

int main(void)
{
  puts("Program obliczający pierwiastki równania kwadratowego.");

  // Dla postaci ax^2 + bx + c = 0
  double a, b, c;

  // Dla prostoty pominięto sprawdzanie wartości
  // wpisywanych przez użytkownika
  printf("Podaj a: ");
  scanf("%lf", &a);

  if (a == 0) {
    puts("To nie jest równanie kwadratowe!");
    return -1;
  }
  
  printf("Podaj b: ");
  scanf("%lf", &b);

  printf("Podaj c: ");
  scanf("%lf", &c);

  printf("Dla równania kwadratowego o współczynnikach:\n a = %.2f, b = %.2f i c = %.2f\n", a, b, c);
  double delta = b*b - 4*a*c;

  if (delta > 0) {
    double x1 = (-b - sqrt(delta))/(2*a);
    double x2 = (-b + sqrt(delta))/(2*a);
    printf("Obliczone pierwiastki to:\n x1 = %.2f, x2 = %.2f\n", x1, x2);
  } else if (delta < 0) {
    puts("Równanie nie posiada rozwiązań");
  } else {
    // Dla delty równej 0
    double x = -b/(2*a);
    printf("Równanie ma jedno rozwiązanie:\n x = %.2f\n", x);
  }

  return 0;
}
