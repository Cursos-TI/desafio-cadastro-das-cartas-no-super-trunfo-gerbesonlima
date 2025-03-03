#include <stdio.h>

int main() {

    //Cabecalho do jogo e regras do jogo
    int opcao;
    printf ("\n               **********Jogo SuperTrunfo*********\n");
    printf ("\n          -------------Regras de Comparação:---------\n"); 
    printf("\nA regra geral é: vence a carta com o maior valor no atributo escolhido.\n");
    printf("Para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.\n");

    // Cadastro de cartas
    char estado1[50], codigocarta1[50], nomedacidade1[50], estado2[50], codigocarta2[50], nomedacidade2[50];
    unsigned long int populacao1, populacao2;
    int numeropontosturistico1, numeropontosturistico2;
    float areaemkm1, pib1, areaemkm2, pib2;

    // Solicitando dados para cadastro carta 01
    printf("\nDados carta 01\n");

    printf("Qual estado: ");
    scanf("%s", estado1);
    
    printf("Codigo da carta: ");
    scanf("%s", codigocarta1);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade1);
    
    printf("Populacao: -Digite apenas numeros sem pontuacao- ");
    scanf("%lu", &populacao1);

    printf("Qual a area em KM²? -Digite apenas numeros sem pontuacao-: ");
    scanf("%f", &areaemkm1);

    printf("Qual o PIB? -Digite apenas numeros sem pontuacao-: ");
    scanf("%f", &pib1);
    
    printf("Quantos pontos turisticos: ");
    scanf("%d", &numeropontosturistico1);

    // Calculo da densidade populacional, PIB per capita e super poder carta 01
    float pibpercapita0 = pib1 / populacao1;
    float densidade0 = populacao1 / areaemkm1;
    float inverso_densidadecarta1 = 1 / densidade0;
    float super_poder1 = (float) populacao1 + areaemkm1 + pib1 + numeropontosturistico1 + pibpercapita0 + inverso_densidadecarta1;

    // Solicitando dados para cadastro carta 02
    printf("\nDados carta 02\n");

    printf("Qual estado: ");
    scanf("%s", estado2);
     
    printf("Codigo da carta: ");
    scanf("%s", codigocarta2);

    printf("Nome da cidade: ");
    scanf("%s", nomedacidade2);
     
    printf("Populacao: -Digite apenas numeros sem pontuacao- ");
    scanf("%lu", &populacao2);

    printf("Qual a area em KM²? -Digite apenas numeros sem pontuacao-: ");
    scanf("%f", &areaemkm2);

    printf("Qual o PIB? -Digite apenas numeros sem pontuacao-: ");
    scanf("%f", &pib2);
     
    printf("Quantos pontos turisticos: ");
    scanf("%d", &numeropontosturistico2);

    // Calculo da densidade populacional, PIB per capita e super poder carta 02
    float densidade = populacao2 / areaemkm2;
    float pibpercapita = pib2 / populacao2;
    float inverso_densidadecarta2 = 1 / densidade;
    float super_poder2 = (float) populacao2 + areaemkm2 + pib2 + numeropontosturistico2 + pibpercapita + inverso_densidadecarta2;
   
    //Opcao para o jogador escolher o atributo de comparacao 
    printf("\n--------Escolha um atributo de comparacao para ver quem ganhou ---------\n");
    printf("\n<1> Populacao | <2> Area | <3> PIB | <4> Numero de pontos turisticos | <5> Densidade demografica.\n");
    printf("\nDigite uma opcao: ");
    scanf("%d", &opcao);
    printf("\n-----------------------------------------------------------\n");
    
    // Escolha do jogador armazenado na variavel opcao
    switch (opcao) {
        case 1:
            printf("Populacao\n");
            printf("%s: %lu\n", nomedacidade1, populacao1);
            printf("%s: %lu\n", nomedacidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Carta 1 venceu pois tem a maior populacao\n");
            } else if (populacao1 < populacao2) {
                printf("Carta 2 venceu pois tem a maior populacao\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Area\n");
            printf("%s: %.2f Km²\n", nomedacidade1, areaemkm1);
            printf("%s: %.2f Km²\n", nomedacidade2, areaemkm2);
            if (areaemkm1 > areaemkm2) {
                printf("Carta 1 venceu pois tem a maior área\n");
            } else if (areaemkm1 < areaemkm2) {
                printf("Carta 2 venceu pois tem a maior área\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("PIB\n");
            printf("%s: %.2f\n", nomedacidade1, pib1);
            printf("%s: %.2f\n", nomedacidade2, pib2);
            if (pib1 > pib2) {
                printf("Carta 1 venceu pois tem o maior PIB\n");
            } else if (pib1 < pib2) {
                printf("Carta 2 venceu pois tem o maior PIB\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4:
            printf("Número de Pontos Turísticos\n");
            printf("%s: %d\n", nomedacidade1, numeropontosturistico1);
            printf("%s: %d\n", nomedacidade2, numeropontosturistico2);
            if (numeropontosturistico1 > numeropontosturistico2) {
                printf("Carta 1 venceu pois tem mais pontos turísticos\n");
            } else if (numeropontosturistico1 < numeropontosturistico2) {
                printf("Carta 2 venceu pois tem mais pontos turísticos\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 5:
            printf("Densidade Demográfica\n");
            printf("%s: %.2f\n", nomedacidade1, densidade0);
            printf("%s: %.2f\n", nomedacidade2, densidade);
            if (densidade0 < densidade) {
                printf("Carta 1 venceu pois tem a menor densidade demográfica\n");
            } else if (densidade0 > densidade) {
                printf("Carta 2 venceu pois tem a menor densidade demográfica\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}