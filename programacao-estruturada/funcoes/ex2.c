
#include <stdio.h>

float Consumo(float distancia, float litros)
{
  return distancia / litros;
}

void Mensagem(float consumo)
{
  if (consumo < 8)
  {
    printf("Venda o carro!\n");
  }
  else if (consumo <= 14)
  {
    printf("Econômico!\n");
  }
  else
  {
    printf("Super econômico!\n");
  }
}

int main()
{
  float distancia, litros;

  printf("Digite a distância percorrida (em Km): ");
  scanf("%f", &distancia);
  printf("Digite a quantidade de litros consumidos: ");
  scanf("%f", &litros);

  Mensagem(Consumo(distancia, litros));

  return 0;
}
