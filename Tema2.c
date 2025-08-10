#include <stdio.h>
#include <string.h>

int main()

{
    char estado1[50], estado2[50], codigo1[5], codigo2[5];
    int ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2, super_poder1 = 0, super_poder2 = 0;
    unsigned long int populacao1, populacao2;



// CARTA 1
    printf("CARTA 1: Digite o nome do Estado: ");
    fgets(estado1, 50, stdin);
    estado1[strcspn(estado1, "\n")] = '\0';
    printf("CARTA 1: Digite o código da carta: ");
    fgets(codigo1, 5, stdin);
    codigo1[strcspn(codigo1, "\n")] = '\0';
    printf("CARTA 1: Digite a população do Estado: ");
    scanf("%lu", &populacao1);
    printf("CARTA 1: Digite a área do estado: ");
    scanf("%f", &area1);
    printf("CARTA 1: Digite o PIB da cidade em bilhoes: ");
    scanf("%f", &pib1);
    printf("CARTA 1: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);
    getchar();

    printf("\n\n"); // Espaço entre as informaçoes

    // CARTA 2
    printf("CARTA 2: Digite o nome do Estado: ");
    fgets(estado2, 50,stdin);
    estado2[strcspn(estado2, "\n")] = '\0';
    printf("CARTA 2: Digite o código da carta: ");
    fgets(codigo2, 5, stdin);
    codigo2[strcspn(codigo2, "\n")] = '\0';
    printf("CARTA 2: Digite a população do Estado: ");
    scanf("%lu", &populacao2);
    printf("CARTA 2: Digite a área do estado: ");
    scanf("%f", &area2);
    printf("CARTA 2: Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);
    printf("CARTA 2: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);
    getchar();

    // CALCULO DENSIDADE E PIB PER CAPITA
    float densidade_populacional_cidade_1 = (float)populacao1 / area1;
    float densidade_populacional_cidade_2 = (float)populacao2 / area2;
    float pib_percapita_1 = (pib1 * 1000000000) / populacao1;
    float pib_percapita_2 = (pib2 * 1000000000) / populacao2;

    // COMPARAÇÃO DAS CARTAS
    printf("\n\n");
    printf("Comparação das cartas: \n");
    printf("Resultado: ");

    if (populacao1 > populacao2)
    {
        printf("População: Carta 1 venceu (%d)\n", populacao1<populacao2);
        super_poder1 +=1;
    }
    else if (populacao1 < populacao2)
    {
        super_poder2 +=1;
        printf("População: Carta 2 venceu (%d)\n", populacao1>populacao2);
    }
    else
    {
        printf("Atributo População: Empate!\n");
    }


    if (area1 > area2)
    {
        printf("Área: Carta 1 venceu (%d)\n", area1<area2);
        super_poder1 +=1;
    }
    else if (area1 < area2)
    {
        printf("Área: Carta 2 venceu (%d)\n", area1>area2);
        super_poder2 +=1;
    }
    else
    {
        printf("Atributo Área: Empate!\n");
    }

    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 venceu (%d)\n", pib1<pib2);
        super_poder1 +=1;
    }
    else if (pib1 < pib2)
    {
        printf("PIB: Carta 2 venceu (%d)\n", pib1>pib2);
        super_poder2 +=1;
    }
    else
    {
        printf("Atributo PIB: Empate!\n");
    }

    if (ponto_turistico1 > ponto_turistico2)
    {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", ponto_turistico1<ponto_turistico2);
        super_poder1 +=1;
    }
    else if (ponto_turistico1<ponto_turistico2)
    {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", ponto_turistico1>ponto_turistico2);
        super_poder2 +=1;
    }
    else
    {
        printf("Atributo Ponto Turístico: Empate!\n");
    }

    if (densidade_populacional_cidade_1 < densidade_populacional_cidade_2)
    {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional_cidade_1 > densidade_populacional_cidade_2);
        super_poder1 +=1;
    }
    else if (densidade_populacional_cidade_1 > densidade_populacional_cidade_2)
    {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional_cidade_1 > densidade_populacional_cidade_2);
        super_poder2 +=1;
    }
    else
    {
        printf("Atributo Densidade Populacional: Empate!\n");
    }

    if (pib_percapita_1 > pib_percapita_2)
    {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapita_1<pib_percapita_2);
        super_poder1 +=1;
    }
    else if (pib_percapita_1 < pib_percapita_2)
    {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", pib_percapita_1>pib_percapita_2);
        super_poder2 +=1;
    }
    else
    {
        printf("Atributo PIB Per Capita: Empate!\n");
    }

    if (super_poder1 > super_poder2)
    {
        printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 < super_poder2);
    }
    else if (super_poder1 < super_poder2)
    {
        printf("Super Poder: Carta 2 venceu (%d)\n", super_poder1 > super_poder2);
    }
    else
    {
        printf("Super Poder: Empate!\n");
    }

    return 0;
}
