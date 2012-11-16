// cw09-03

#include <stdio.h>
#include <math.h>

// Dla uproszczenia bez typedef
struct Point {
  double x, y;
};

double distance(struct Point p1, struct Point p2);

int main(void)
{
  // Przykładowe punkty
  struct Point point1 = { 0.23, -45.3 };
  struct Point point2 = { -2.0, 12.123 };

  printf("Point 1: x = %.2f, y = %.2f\n", point1.x, point1.y);
  printf("Point 2: x = %.2f, y = %.2f\n", point2.x, point2.y);
  printf("Distance = %.2f\n", distance(point1, point2));

  return 0;
}

double distance(struct Point p1, struct Point p2)
{
  double dx = p2.x - p1.x;
  double dy = p2.y - p1.y;
  return sqrt(dx*dx + dy*dy);
}
