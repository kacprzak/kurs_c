// cw09-04

#include <stdio.h>
#include <math.h>

// Dla uproszczenia bez typedef
struct Point {
  double x, y;
};

struct Circle {
  struct Point center; // Środek okręgu
  double r; // Promień okręgu
};

double distance(struct Point p1, struct Point p2);

int main(void)
{
  // Przykładowy punkty
  struct Point point = { 0.23, -45.3 };

  // Przykładowy okrąg
  struct Point center = { -2.0, 12.123 };
  struct Circle circle = { center, 70.0 };

  printf("Point: x = %.2f, y = %.2f\n", point.x, point.y);
  printf("Circle: x = %.2f, y = %.2f, r = %.2f\n",
         circle.center.x, circle.center.y, circle.r);
  
  // Odległość środka okręgu od punktu
  double dist = distance(circle.center, point);
  printf("Distance = %.2f\n", dist);

  if (dist < circle.r) {
    puts("Punkt leży wewnątrz okręgu");
  } else if (dist > circle.r) {
    puts("Punkt leży na zewnątrz okręgu");
  } else {
    puts("Punkt leży na brzegu okręgu");
  }

  return 0;
}

double distance(struct Point p1, struct Point p2)
{
  double dx = p2.x - p1.x;
  double dy = p2.y - p1.y;
  return sqrt(dx*dx + dy*dy);
}
