#include <stdio.h>

float calcular_densidade(unsigned long int populacao, float area) {
    if (area == 0) return 0;
    return populacao / area;
}

int main (){

    //carta 1
    char estado1[50];
    char codigocarta1[50];
    char nomecidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int npt1;
    float densidade1;
    float pib_per_capita1;
    float inversodensidade1;
    float superpoder1;
    

    // carta 2
    char estado2[50];
    char codigocarta2[50];
    char nomecidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int npt2;
    float densidade2;
    float pib_per_capita2;
    float inversodensidade2;
    float superpoder2;


    //configuração da primeira carta
    printf("\n------------------------------------------------------\n Bem vindo jogador! Vamos configurar a primeira carta:\n------------------------------------------------------ \n");

        printf("\nDigite o nome do estado da primeira carta: \n");
        scanf(" %[^\n]", estado1);

        printf("\nDigite o codigo da primeira carta: \n");
        scanf(" %[^\n]", codigocarta1);

        printf("\nDigite o nome da cidade da primeira carta: \n");
        scanf(" %[^\n]", nomecidade1);;

        printf("\nDigite a população da primeira carta: \n");
        scanf("%lu", &populacao1);

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
        scanf ("%lu", &populacao2);

        printf("\nDigite a área da segunda carta: \n");
        scanf("%f", &area2);
        
        printf("\nDigite o PIB da segunda carta: \n");
        scanf("%f", &pib2);

        printf("\nDigite o número de pontos turísticos da segunda carta: \n");
        scanf("%d", &npt2);


    //Calculo dos valores
    densidade1 = calcular_densidade(populacao1, area1);
    pib_per_capita1 = pib1 / populacao1;


    densidade2 = calcular_densidade(populacao2, area2);
    pib_per_capita2 = pib2 / populacao2;

    inversodensidade1 = 1 / densidade1;
    inversodensidade2 = 1 / densidade2;

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)npt1 + pib_per_capita1 + inversodensidade1;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)npt2 + pib_per_capita2 + inversodensidade2;


    //exibição das cartas:
    //carta 1
        printf("\n-----------------------------------------\n          Primeira carta: \n-----------------------------------------\n");
        printf("Carta: 1\n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigocarta1);
        printf("Nome da Cidade: %s\n", nomecidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", npt1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per Capita: %.2f\n", pib_per_capita1);


    //carta 2
        printf("\n-----------------------------------------\n          Segunda carta: \n-----------------------------------------\n");
        printf("Carta: 2\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigocarta2);
        printf("Nome da Cidade: %s\n", nomecidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Número de pontos turísticos: %d\n", npt2);
        printf("Densidade Populacional: %.2f\n", densidade2);
        printf("PIB per Capita: %.2f\n\n\n", pib_per_capita2);

    //Jogo
        printf("\n-----------------------------------------\n       Comparação de Cartas: \n-----------------------------------------\n");


        //População
        if (populacao1 > populacao2) {
            printf("População: Carta 1 venceu \n");
        }
        else if (populacao1 == populacao2) {
            printf("População: Empate entre as duas cartas \n");
        }
        else {
            printf("População: Carta 2 venceu \n");
        }
        

        //Área
        if (area1 > area2) {
            printf("Área: Carta 1 venceu \n");
        }
        else if (area1 == area2) {
            printf("Área: Empate entre as duas cartas \n");
        }
        else {
            printf("Área: Carta 2 venceu \n");
        }


        //PIB
        if (pib1 > pib2) {
            printf("PIB: Carta 1 venceu \n");
        }
        else if (pib1 == pib2) {
            printf("PIB: Empate entre as duas cartas \n");
        }
        else {
            printf("PIB: Carta 2 venceu \n");
        }


        //Pontos Turísticos
        if (npt1 > npt2) {
            printf("Pontos Turísticos: Carta 1 venceu \n");
        }
        else if (npt1 == npt2) {
            printf("Pontos Turísticos: Empate entre as duas cartas \n");
        }
        else {
            printf("Pontos Turísticos: Carta 2 venceu \n");
        }


        //Densidade Populacional
        if (densidade1 > densidade2) {
            printf("Densidade Populacional: Carta 1 venceu \n");
        }
        else if (densidade1 == densidade2) {
            printf("Densidade Populacional: Empate entre as duas cartas \n");
        }
        else {
            printf("Densidade Populacional: Carta 2 venceu \n");
        }


        //PIB per Capita
        if (pib_per_capita1 > pib_per_capita2) {
            printf("PIB per Capita: Carta 1 venceu \n");
        }
        else if (pib_per_capita1 == pib_per_capita2) {
            printf("PIB per Capita: Empate entre as duas cartas \n");
        }
        else {
            printf("PIB per Capita: Carta 2 venceu \n");
        }


        //Super poder
        if (superpoder1 > superpoder2) {
            printf("Super Poder: Carta 1 venceu \n");
        }
        else if (superpoder1 == superpoder2) {
            printf("Super Poder: Empate entre as duas cartas \n");
        }
        else {
            printf("Super Poder: Carta 2 venceu \n");
        }

}
