#include <stdio.h>

float calcular_dencidade(int populacao,float area) {
    return populacao/area;
}

int main (){

    //carta 1
    char estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int npt1;
    float densidade1;
    float pib_per_capita1;
    

    // carta 2
    char estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int npt2;
    float densidade2;
    float pib_per_capita2;


    //configuração da primeira carta
    printf("\n------------------------------------------------------\n Bem vindo jogador! Vamos configurar a primeira carta:\n------------------------------------------------------ \n");

        printf("\nDigite o nome do estado da primeira carta: \n");
        scanf(" %[^\n]", estado1);

        printf("\nDigite o codigo da primeira carta: \n");
        scanf(" %[^\n]", codigocarta1);

        printf("\nDigite o nome da cidade da primeira carta: \n");
        scanf(" %[^\n]", nomecidade1);;

        printf("\nDigite a população da primeira carta: \n");
        scanf("%d", &populacao1);

        printf("\nDigite a área da primeira carta: \n");
        scanf("%f", &area1);

        printf("\nDigite o PIB da primeira carta: \n");
        scanf("%f", &pib1);

        printf("\nDigite o número de pontos turísticos da primeira carta: \n");
        scanf("%d", &npt1);



    //configuração da segunda carta

    printf("\n-------------------------------------------\nExcelente! Agora configure a segunda carta:\n------------------------------------------- \n");

        printf("\nDigite o nome do estado da segunda carta: \n");
        scanf(" %[^\n]", estado2);

        printf("\nDigite o código da segunda carta: \n");
        scanf(" %[^\n]", codigocarta2);

        printf("\nDigite o nome da cidade da segunda carta: \n");
        scanf(" %[^\n]", nomecidade2);

        printf("\nDigite a população da segunda carta: \n");
        scanf ("%d", &populacao2);

        printf("\nDigite a área da segunda carta: \n");
        scanf("%f", &area2);
        
        printf("\nDigite o PIB da segunda carta: \n");
        scanf("%f", &pib2);

        printf("\nDigite o número de pontos turísticos da segunda carta: \n");
        scanf("%d", &npt2);


    //Calculo dos valores de densidade e pib per capita
    densidade1 = calcular_dencidade(populacao1, area1);
    pib_per_capita1 = pib_per_capita(pib1, populacao1);


    densidade2 = calcular_dencidade(populacao2, area2);
    pib_per_capita2 = pib2 / populacao2;


    //exibição das cartas:
    //carta 1
        printf("\n-----------------------------------------\n        Primeira carta: \n");
        printf("Carta: 1\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigocarta1);
        printf("Nome da Cidade: %s\n", nomecidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", npt1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per Capita: %.2f\n", pib_per_capita1);


    //carta 2
        printf("\n-----------------------------------------\n        Segunda carta: \n");
        printf("Carta: 2\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigocarta2);
        printf("Nome da Cidade: %s\n", nomecidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f", pib2);
        printf("Número de pontos turísticos: %d\n", npt2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per Capita: %.2f\n", pib_per_capita2);
}
