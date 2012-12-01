// cw08-01
#include <stdlib.h> // atoi
#include <stdio.h>  // printf puts

// Deklaracja funkcji
long long unsigned silnia(int n);

int main(int argc, char *argv[])
{
  if (argc < 2) {
    puts("Sposób użycia: cw08-01 n");
    return -1;
  }

  int n = atoi(argv[1]);
  printf("%d! = ", n);

  if (n < 0) {
    puts("Argument nie może być mniejszy od zera!");
    return -2;
  }

  long long unsigned wynik = silnia(n);
 
  printf("%llu\n", wynik);
  return 0;
}

// Definicja funkcji
long long unsigned silnia(int n)
{
  long long unsigned result = 1;
  while (n > 1)
    result *= n--;

  return result;
}
