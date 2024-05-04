#include <stdio.h>
#include <locale.h>
#include <locale.h>


struct veiculo
{
   char descricao[20];
   char combustivel[20];
   float valorLitroCombustivel;
   int mediaKmLitro;
};


struct viagem
{
   char cidadeSaida[30];
   char cidadeDestino[30];
   int distancia;
   float custo;
   struct veiculo veiculo;
};


int main()
{
   setlocale(LC_ALL, "Portuguese");
   struct veiculo carro;
   struct viagem passeio;


   printf("---Calculador de viagens---\n");
  
   printf("Qual a cidade de saída? ");
   scanf("%s", &passeio.cidadeSaida);


   printf("Qual a cidade de destino? ");
   scanf("%s", &passeio.cidadeDestino);


   printf("Qual a distância em KM? ");
   scanf("%d", &passeio.distancia);
  
   printf("Qual modelo veículo? ");
   scanf("%s", &carro.descricao);


   printf("Qual combustível utilizado? ");
   scanf("%s", &carro.combustivel);


   printf("Qual valor do litro do combustível? ");
   scanf("%f", &carro.valorLitroCombustivel);


   printf("Qual a média de km por litro do veículo? ");
   scanf("%d", &carro.mediaKmLitro);


   passeio.veiculo = carro;
   passeio.custo = (passeio.distancia / carro.mediaKmLitro) * carro.valorLitroCombustivel;


   printf("\n---Segue as informações sobre a viagem---\n");
   printf(
       "Você vai de %s para %s com veículo %s e vai gastar R$ %.2f\n",
       passeio.cidadeSaida, passeio.cidadeDestino, carro.descricao, passeio.custo
   );


   return 0;
}