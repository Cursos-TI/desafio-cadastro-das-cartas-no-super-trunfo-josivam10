#include <stdio.h>
int main(){

    char estado[100], capital[99];
    int populacao, ddd;
    float area;
    float pib;
    int pontosT;

printf ("BEM VINDO AO JOGO \n");
printf ("EXEMPLO DO JOGO! \n");
printf("Carta 1 \n");
printf("Estado: Rio de Janeiro \n");
printf("Codigo: 021 \n");
printf("Capital: Rio de Janeiro \n");
printf("Populacao: 6748000 \n");
printf("Area: 1200.25 km² \n");
printf("PIB: 300.50 bilhoes de reais \n");
printf("Numero de Pontos Turísticos: 30 \n");
printf("____________________________ \n");
    printf("VAMOS COMEÇAR O JOGO \n");
    printf("Digite a carta 2 \n");
    printf("Qual o nome do estado: \n");
    scanf("%s",&estado);
    printf("Qual o DDD do estado: \n");
    scanf("%d",&ddd);
    printf("Digite a capital: \n");
    scanf("%s",&capital);
    printf("Digite a populacao: \n");
    scanf("%d",&populacao);
    printf("Digite a area do estado: \n");
    scanf("%f",&area);
    printf("Digite o pib: \n");
    scanf("%f",&pib);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d",&pontosT);
    printf("-------------------- \n");
    printf("____________________ \n");
    printf("AQUI ESTA SUA CARTA! \n");
    printf("Estado: %s \n",estado);
    printf("Codigo: %d \n",ddd);
    printf("Capital: %s \n",capital);
    printf("Populacao: %d \n",populacao);
    printf("Area: %.2f \n",area);
    printf("PIB: %.2f bilhoes de reais \n",pib);
    printf("Numero de Pontos Turisticos: %d \n",pontosT);

    return 0;
}