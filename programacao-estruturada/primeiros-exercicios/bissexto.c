#include <stdio.h>

// utf8
#define SIZE 10

int main(void)
{

  char *name;
  int birth;
  int year;

  printf("\nnome:  \n");
  scanf("%s", name);

  printf("\nAno de nascimento: \n");
  scanf("%d", &birth);

  printf("\nAno atual:  \n");
  scanf("%d", &year);

  int days = (year - birth) * 365;

  // Counts years with 366 days
  for (int i = birth; i < year; i++)
  {
    if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
    {
      days++;
    }
  }

  printf("%s viveu por %d dias.\n", name, days);

  printf("\nAno futuro:  \n");
  scanf("%d", &year);

  // Recalcula os anos
  days = (year - birth) * 365;

  // Counts years with 366 days
  for (int i = birth; i < year; i++)
  {
    if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
    {
      days++;
    }
  }

  printf("%s viveu por %d dias.\n", name, days);

  char cont;

  printf("Deseja continuar [S/n]?\n");
  scanf("%s", &cont);

  if (cont == 'S')
  {
    // main recursiva haha
    return main();
  }
  else
  {
    return 0;
  }
}