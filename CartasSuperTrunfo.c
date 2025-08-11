#include <stdio.h>

int main (){

    //carta 1
    char estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int npt1;

    // carta 2
    char estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int npt2;


    //configuração da primeira carta
    printf("Bem vindo jogador! Vamos configurar a primeira carta: \n");

        printf("\nDigite o nome do estado: \n");
        scanf("%s", &estado1);

        printf("\nDigite o código da carta: \n");
        scanf("%s", &codigocarta1);

        printf("\nDigite o nome da cidade: \n");
        scanf ("%s", &nomecidade1);

        printf("\nDigite a população: \n");
        scanf ("%d", &populacao1);

        printf("\nDigite a área: \n");
        scanf("%f", &area1);
        
        printf("\nDigite o PIB: \n");
        scanf("%f", &pib1);

        printf("\nDigite o número de pontos turísticos: \n");
        scanf("%d", &npt1);


    //configuração da segunda carta

    printf("\nExcelente! Agora configure a segunda carta: \n");

        printf("\nDigite o nome do estado: \n");
        scanf("%s", &estado2);

        printf("\nDigite o código da carta: \n");
        scanf("%s", &codigocarta2);

        printf("\nDigite o nome da cidade: \n");
        scanf ("%S", &nomecidade2);

        printf("\nDigite a população: \n");
        scanf ("%d", &populacao2);

        printf("\nDigite a área: \n");
        scanf("%f", &area2);
        
        printf("\nDigite o PIB: \n");
        scanf("%f", &pib2);

        printf("\nDigite o número de pontos turísticos: \n");
        scanf("%d", &npt2);


    //exibição das cartas:
    //carta 1
        printf("\n Primeira carta: \n");
        printf("Código: %s\n", codigocarta1);
        printf("Cidade: %s - Estado: %s\n", nomecidade1, estado1);
        printf("Número de pontos turísticos: %d\n", npt1);
        printf("Área total: %.2f\n", area1);
        printf("População: %d\n", populacao1);
        printf("PIB: %.2f\n", pib1);

    //carta 2
        printf("\n Segunda carta: \n");
        printf("Código: %s\n", codigocarta2);
        printf("Cidade: %s - Estado: %s\n", nomecidade2, estado2);
        printf("Número de pontos turísticos: %d\n", npt2);
        printf("Área total: %.2f\n", area2);
        printf("População: %d\n", populacao2);
        printf("PIB: %.2f", pib2);
}
