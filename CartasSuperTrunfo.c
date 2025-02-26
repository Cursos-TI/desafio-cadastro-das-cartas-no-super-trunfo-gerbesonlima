#include <stdio.h>

int main() {

    // Dados para cadastro carta 01
    char estado1[50], codigocarta1[50], nomedacidade1[50];
    unsigned long int populacao1;
    int numeropontosturistico1;
    float areaemkm1, pib1;
       
    // Dados para cadastro carta 02
    char estado2[50], codigocarta2[50], nomedacidade2[50];
    unsigned long int populacao2;
    int numeropontosturistico2;
    float areaemkm2, pib2;

    // Solicitando dados para cadastro carta 01
    printf("\nDados carta 01\n");

    printf("Qual estado: \n");
    scanf("%s", estado1);
    
    printf("Codigo da carta: \n");
    scanf("%s", codigocarta1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);
    
    printf("Populacao: -Digite apenas numeros sem pontuacao- \n");
    scanf("%d", &populacao1);

    printf("Qual a area em KM²? -Digite apenas numeros sem pontuacao-: \n");
    scanf("%f", &areaemkm1);

    printf("Qual o PIB? -Digite apenas numeros sem pontuacao-:\n");
    scanf("%f", &pib1);
    
    printf("Quantos pontos turisticos \n");
    scanf("%d", &numeropontosturistico1);

    // Calculo da densidade populacional, PIB per capita e super poder carta 01
    float pibpercapita0 = pib1 / populacao1;
    float densidade0 = populacao1 / areaemkm1;
    float inverso_densidadecarta1 = 1 / densidade0;
    float super_poder1 = (float) populacao1 + areaemkm1 + pib1 + numeropontosturistico1 + pibpercapita0 + inverso_densidadecarta1;

    // Solicitando dados para cadastro carta 02
    printf("\nDados carta 02\n");

    printf("Qual estado: \n");
    scanf("%s", estado2);
     
    printf("Codigo da carta: \n");
    scanf("%s", codigocarta2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);
     
    printf("Populacao: -Digite apenas numeros sem pontuacao- \n");
    scanf("%d", &populacao2);

    printf("Qual a area em KM²? -Digite apenas numeros sem pontuacao-: \n");
    scanf("%f", &areaemkm2);

    printf("Qual o PIB? -Digite apenas numeros sem pontuacao-:\n");
    scanf("%f", &pib2);
     
    printf("Quantos pontos turisticos \n");
    scanf("%d", &numeropontosturistico2);

    // Calculo da densidade populacional, PIB per capita e super poder carta 02
    float densidade = populacao2 / areaemkm2;
    float pibpercapita = pib2 / populacao2;
    float inverso_desidadecarta2 = 1 / densidade;
    float super_poder2 = (float) populacao2 + areaemkm2 + pib2 + numeropontosturistico2 + pibpercapita + inverso_desidadecarta2;

    // Imprimindo dados da carta 01
    printf("\nDados carta 01\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigocarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %.2f KM² \n", areaemkm1);
    printf("PIB: %.2f bilhoes de reais \n", pib1);
    printf("Numero de pontos turisticos: %d \n", numeropontosturistico1);
    printf("A densidade populacional e de: %.2f por Km²\n", densidade0);
    printf("O PIB per capita e de: %.2f por pessoa\n", pibpercapita0);
    printf("Super poder: %.2f\n", super_poder1);

    // Imprimindo dados da carta 02
    printf("\nDados carta 02\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigocarta2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %.2f KM² \n", areaemkm2);
    printf("PIB: %.2f bilhoes de reais \n", pib2);
    printf("Numero de pontos turisticos: %d \n", numeropontosturistico2);
    printf("A densidade populacional e de: %.2f por Km²\n", densidade);
    printf("O PIB per capita e de: %.2f por pessoa\n", pibpercapita);
    printf("Super poder: %.2f\n", super_poder2);

    // Comparação de cartas
    int resultado1 = populacao1 > populacao2;
    int resultado2 = areaemkm1 > areaemkm2;
    int resultado3 = pib1 > pib2;
    int resultado4 = numeropontosturistico1 > numeropontosturistico2;
    int resultado5 = inverso_densidadecarta1 < inverso_desidadecarta2;
    int resultado6 = pibpercapita0 > pibpercapita;
    int resultado7 = super_poder1 > super_poder2;

    // Imprimindo resultado
    printf("\n****COMPARACAO DE CARTAS:******\n");
    printf("\n****Resultado (1) carta1 vence e Resultado (0) Carta2 vence:*****\n");
    printf("\nPopulacao: Carta 1 venceu (%d)\n", resultado1);
    printf("Area: Carta 1 venceu (%d)\n", resultado2);
    printf("PIB: Carta 1 venceu (%d)\n", resultado3);
    printf("Pontos Turisticos: Carta 1 venceu: (%d)\n", resultado4);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultado5);
    printf("PIB per capita: Carta 1 venceu (%d)\n", resultado6);
    printf("Super poder: Carta 1 venceu (%d)\n", resultado7);

    return 0;
}
