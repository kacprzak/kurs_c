// cw07-01
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  if (argc < 2) {
    puts("Nie podano argumentu!");
    return -1;
  }

  int n = atoi(argv[1]);
  printf("%d! = ", n);

  if (n < 0) {
    puts("Argument nie może być mniejszy od zera!");
    return -2;
  }

  long long unsigned result = 1;
  while (n > 1)
    result *= n--;
  
  printf("%llu\n", result);
  return 0;
}
