// cw07-04
#include <stdio.h>
#include <limits.h>

int main(void)
{
  // Nazwa pliku z liczbami
  const char *filename = "dane";
  
  FILE *fp = fopen(filename, "r");
  if (fp == NULL) {
    perror(filename);
    return -1;
  }
  
  int num;
  int max = INT_MIN;
  while (fscanf(fp, "%d", &num) == 1) {
    if (num > max)
      max = num;
  }

  printf("Największa odczytana liczba to: %d\n", max);
  fclose(fp);
  return 0;
}
