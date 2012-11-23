// cw06-02
// Wersja C++
#include <iostream>
#include <cmath>

int main()
{
  using namespace std;

  cout << "Program obliczający pierwiastki równania kwadratowego." << endl;

  // Dla postaci ax^2 + bx + c = 0
  double a, b, c;

  // Dla prostoty pominięto sprawdzanie wartości
  // wpisywanych przez użytkownika
  cout << "Podaj a: ";
  cin >> a;

  if (a == 0) {
    cout << "To nie jest równanie kwadratowe!" << endl;
    return -1;
  }
  
  cout << "Podaj b: ";
  cin >> b;

  cout << "Podaj c: ";
  cin >> c;

  cout << "Dla równania kwadratowego o współczynnikach:\n a = " << a
       << ", b = " << b << " i c = " << c << endl;

  double delta = b*b - 4*a*c;

  if (delta > 0) {
    double x1 = (-b - sqrt(delta))/(2*a);
    double x2 = (-b + sqrt(delta))/(2*a);
    cout << "Obliczone pierwiastki to:\n x1 = " << x1
         << ", x2 = " << x2 << endl;
  } else if (delta < 0) {
    cout << "Równanie nie posiada rozwiązań" << endl;
  } else {
    // Dla delty równej 0
    double x = -b/(2*a);
    cout << "Równanie ma jedno rozwiązanie:\n x = " << x << endl;
  }

  return 0;
}
