#include <stdio.h>

void DesenhaLinha(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("=");
  }
  printf("\n");
}

int Intervalo(int a, int b)
{
  int soma = 0;
  for (int i = a; i <= b; i++)
  {
    soma += i;
  }
  return soma;
}

int main()
{
  int a, b;
  char opcao;

  do
  {
    DesenhaLinha(20);
    printf("Digite dois numeros inteiros positivos: ");
    scanf("%d %d", &a, &b);
    printf("Soma dos numeros entre %d e %d: %d\n", a, b, Intervalo(a, b));
    printf("Digite 'F' para sair ou qualquer outra tecla para continuar: ");
    scanf(" %c", &opcao);
  } while (opcao != 'F');

  return 0;
}
