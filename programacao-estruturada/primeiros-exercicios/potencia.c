#include <stdio.h>

int potencia(int base, int exp)
{
  int result = 1;
  for (int i = 0; i < exp; i++)
  {
    result *= base;
  }
  return result;
}

int main(void)
{
  int base;
  int exp;

  printf("Base: \n");
  scanf("%d", &base);

  printf("Expoente: \n");
  scanf("%d", &exp);

  printf("%d elevado a %d é %d\n", base, exp, potencia(base, exp));
}