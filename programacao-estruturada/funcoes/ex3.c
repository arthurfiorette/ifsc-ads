#include <stdio.h>

float AreaTriangulo(float base, float altura)
{
  return (base * altura) / 2;
}

float AreaRetangulo(float base, float altura)
{
  return base * altura;
}

float AreaCirculo(float raio)
{
  return 3.14 * (raio * raio);
}

float SolicitaMedida(char *texto)
{
  float medida;
  printf("%s", texto);
  scanf("%f", &medida);
  return medida;
}

void ExibeArea(char *texto, float area)
{
  printf("%s %.2f\n", texto, area);
}

int main(void)
{
  float base, altura, raio;
  char opcao;

  do
  {
    printf("Digite a figura que deseja calcular a área:\n");
    printf("1 - Retângulo\n");
    printf("2 - Triângulo\n");
    printf("3 - Círculo\n");
    printf("F - Fim\n");
    scanf(" %c", &opcao);
    switch (opcao)
    {
    case '1':
      base = SolicitaMedida("Informe o tamanho da base: ");
      altura = SolicitaMedida("Informe o tamanho da altura: ");
      ExibeArea("A área do retângulo é:", AreaRetangulo(base, altura));
      break;
    case '2':
      base = SolicitaMedida("Informe o tamanho da base: ");
      altura = SolicitaMedida("Informe o tamanho da altura: ");
      ExibeArea("A área do triângulo é:", AreaTriangulo(base, altura));
      break;
    case '3':
      raio = SolicitaMedida("Informe o tamanho do raio: ");
      ExibeArea("A área do círculo é:", AreaCirculo(raio));
      break;
    }
  } while (opcao != 'F');

  return 0;
}