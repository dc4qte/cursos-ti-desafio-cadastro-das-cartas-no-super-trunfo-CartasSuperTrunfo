#include <stdio.h>
#include <string.h>

int main(){
    char pais1[50], pais2[50], resultado[100];
    int ponto_turistico1, ponto_turistico2, escolha1, escolha2, pontuacao1 = 0, pontuacao2 = 0;
    float area1, area2, pib1, pib2,densidade_populacional_cidade_1, densidade_populacional_cidade_2;
    unsigned long int populacao1, populacao2;


// CARTA 1
    printf("--------------------------CARTA 1------------------------\n\n");
    printf("CARTA 1: Digite o nome do País: ");
    fgets(pais1, 50, stdin);
    pais1[strcspn(pais1, "\n")] = '\0';
    printf("CARTA 1: Digite o número de habitantes: ");
    scanf("%lu", &populacao1);
    printf("CARTA 1: Digite a área do país em km²: ");
    scanf("%f", &area1);
    printf("CARTA 1: Digite o PIB do país em bilhões: ");
    scanf("%f", &pib1);
    printf("CARTA 1: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);
    getchar();
    printf("\n");
    printf("--------------------------CARTA 2------------------------\n\n"); // Espaço entre as informaçoes

    // CARTA 2
    printf("CARTA 2: Digite o País: ");
    fgets(pais2, 50,stdin);
    pais2[strcspn(pais2, "\n")] = '\0';
    printf("CARTA 2: Digite o número de habitantes: ");
    scanf("%lu", &populacao2);
    printf("CARTA 2: Digite a área do país em km²: ");
    scanf("%f", &area2);
    printf("CARTA 2: Digite o PIB do país em bilhões: ");
    scanf("%f", &pib2);
    printf("CARTA 2: Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);
    getchar();

    // CARTA 1
    densidade_populacional_cidade_1 = (float) populacao1 / area1;


    // CARTA 2
    densidade_populacional_cidade_2 = (float) populacao2 / area2;

    // MENU DE ESCOLHA
    printf("\n\n");
    printf("Escolha um atributo a ser comparado:  \n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    printf("5- Densidade demográfica\n");
    scanf("%d", &escolha1);
    printf("\n\n");


    // COMPARACAO ENTRE AS CARTAS
    switch (escolha1){
    case 1:
        if (populacao1 != populacao2){
        (populacao1 > populacao2) ? pontuacao1 ++ : pontuacao2 ++;
        }
    break;
    case 2:
        if (area1 != area2)
        {
        (area1 > area2) ? pontuacao1 ++ : pontuacao2 ++;
        }
    break;

    case 3:
        if (pib1 != pib2)
        {
       (pib1 > pib2) ? pontuacao1 ++ : pontuacao2 ++;
        }
    break;

    case 4:
        if (ponto_turistico1 != ponto_turistico2)
        {
        (ponto_turistico1 > ponto_turistico2) ? pontuacao1++ : pontuacao2++;
        }
    break;

    case 5:
        if (densidade_populacional_cidade_1 != densidade_populacional_cidade_2)
        {
        (densidade_populacional_cidade_1 > densidade_populacional_cidade_2) ? pontuacao2++ : pontuacao1++;
        }
    break;

    default:
          printf("Opção inválida!");
    }

    // 2o ATRIBUTO A SER COMPARADO
    printf("\n\n");
    printf("Escolha um atributo diferente a ser comparado:  \n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Número de pontos turísticos\n");
    printf("5- Densidade demográfica\n");
    scanf("%d", &escolha2);
    printf("\n\n");

    if (escolha1 == escolha2)
    {
        printf("Você escolheu o mesmo atributo!\n");
    }
    else
    {
        switch (escolha2)
        {
        case 1:
            if (populacao1 != populacao2)
                {
                (populacao1 > populacao2) ? pontuacao1 ++ : pontuacao2 ++;
                }
            break;

        case 2:
            if (area1 != area2)
            {
            (area1 > area2) ? pontuacao1 ++ : pontuacao2 ++;
            }
        break;

        case 3:
            if (pib1 != pib2)
            {
           (pib1 > pib2) ? pontuacao1 ++ : pontuacao2 ++;
            }
        break;

        case 4:
            if (ponto_turistico1 != ponto_turistico2)
            {
            (ponto_turistico1 > ponto_turistico2) ? pontuacao1++ : pontuacao2++;
            }
        break;

        case 5:
            if (densidade_populacional_cidade_1 != densidade_populacional_cidade_2)
            {
            (densidade_populacional_cidade_1 > densidade_populacional_cidade_2) ? pontuacao2++ : pontuacao1++;
            }
        break;

    default:
          printf("Opção inválida!");
    }

    }

    // MOSTRAR AO USUARIO A COMPARACAO 1
    switch (escolha1)
    {
    case 1:
        printf("Comparação das cartas (Atributo População): \n\n");
        printf("Carta 1  (%s) - População: %lu\n", pais1, populacao1);
        printf("Carta 2  (%s) - População: %lu\n", pais2, populacao2);
        printf("\n");

        break;

    case 2:

        printf("Comparação das cartas (Área): \n\n");
        printf("Carta 1  (%s) - Área: %.2f\n",pais1, area1);
        printf("Carta 2  (%s) - Área %.2f\n", pais2, area2);
        printf("\n");

        break;

    case 3:

        printf("Comparação das cartas (PIB): \n\n");
        printf("Carta 1  (%s) - PIB: %.2f\n", pais1,pib1);
        printf("Carta 2  (%s) - PIB: %.2f\n", pais2, pib2);
        printf("\n");

        break;

    case 4:

        printf("Comparação das cartas (Número de Pontos Turísticos): \n\n");
        printf("Carta 1 (%s) - Quantidade de Pontos Turísticos: %d\n",pais1, ponto_turistico1);
        printf("Carta 2  (%s) - Quantidade de Pontos Turísticos: %d\n", pais2, ponto_turistico2);
        printf("\n");

        break;

    case 5:

        printf("Comparação das cartas (Densidade Demográfica): \n\n");
        printf("Carta 1  (%s) - Densidade Demográfica: %.2f\n", pais1, densidade_populacional_cidade_1);
        printf("Carta 2 (%s) - Densidade Demográfica: %.2f\n", pais2, densidade_populacional_cidade_2);
        printf("\n");

        break;

    default:
        printf("Opção inválida para a escolha 1!\n");
    }

    // MOSTRAR A 2A COMPARACAO
    switch (escolha2)
    {
    case 1:
        printf("Comparação das cartas (Atributo População): \n\n");
        printf("Carta 1  (%s) - População: %lu\n", pais1, populacao1);
        printf("Carta 2  (%s) - População: %lu\n", pais2, populacao2);
        printf("\n");

        break;

    case 2:

        printf("Comparação das cartas (Área): \n\n");
        printf("Carta 1  (%s) - Área: %.2f\n",pais1, area1);
        printf("Carta 2  (%s) - Área %.2f\n", pais2, area2);
        printf("\n");

        break;

    case 3:

        printf("Comparação das cartas (PIB): \n\n");
        printf("Carta 1  (%s) - PIB: %.2f\n", pais1,pib1);
        printf("Carta 2  (%s) - PIB: %.2f\n", pais2, pib2);
        printf("\n");

        break;

    case 4:

        printf("Comparação das cartas (Número de Pontos Turísticos): \n\n");
        printf("Carta 1 (%s) - Quantidade de Pontos Turísticos: %d\n",pais1, ponto_turistico1);
        printf("Carta 2  (%s) - Quantidade de Pontos Turísticos: %d\n", pais2, ponto_turistico2);
        printf("\n");

        break;

    case 5:

        printf("Comparação das cartas (Densidade Demográfica): \n\n");
        printf("Carta 1  (%s) - Densidade Demográfica: %.2f\n", pais1, densidade_populacional_cidade_1);
        printf("Carta 2 (%s) - Densidade Demográfica: %.2f\n", pais2, densidade_populacional_cidade_2);
        printf("\n");

        break;

    default:
        printf("Opção inválida para a escolha 2!\n");
    }

    //MSG FINAL MOSTRANDO O GANHADOR
    if (pontuacao1 > pontuacao2)
    {
        sprintf(resultado, "País 1 - (%s) foi o vencedor!\n", pais1);

    }
    else if (pontuacao1 < pontuacao2)
    {
        sprintf(resultado, "País 2 - (%s) foi o vencedor!\n", pais2);

    }
    else
    {
        strcpy(resultado, "Empate\n");

    }
    printf("%s", resultado);
    printf("Pontuacao CARTA 1: %d\nPontuacao CARTA 2: %d", pontuacao1, pontuacao2);
    return 0;
}
