#include <stdio.h>
#include <string.h>
int main(){
    char codigo_da_carta_1[5]="A001",codigo_da_carta_2[5]="A002"; 
    char estado_1[20],estado_2[20];
    char cidade_1[30],cidade_2[30];
    char decisao[30];
    unsigned long int populacao_1,populacao_2;
    float area_1,area_2; 
    float pib_1,pib_2; 
    float densidade_populacional_1,densidade_populacional_2; 
    float pib_percapita_1,pib_percapita_2; 
    int numero_pontos_turisticos_1,numero_pontos_turisticos_2;
    float super_poder;
    super_poder= 0;

    //  Densidade populacional (float): calculada como população dividida pela área da cidade.
    // PIB per capita (float): calculado como PIB total da cidade dividido pela população.
    // Super Poder (float): soma de todas as propriedades, ajustada conforme a lógica do super poder(Ainda não usado). 
    printf("Vamos começar o jogo, primeiro você colocará os dados da primeira carta:");
 
    // Solicitação dos valores da primeira carta:
    printf("Digite o estado: ");
    scanf("%s", estado_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade_1);

    printf("Digite a população (em números inteiros): ");
    scanf("%lu", &populacao_1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_1);

    densidade_populacional_1= populacao_1/area_1;
    printf("Digite a densidade populacional (hab/km²): %f", densidade_populacional_1);

    pib_percapita_1=pib_1/populacao_1;
    printf("Digite o PIB per capita:%f ", pib_percapita_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_1);

    // Solicitando os dados da segunda carta:

    printf("Digite o estado: ");
    scanf("%s", &estado_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade_2);

    printf("Digite a população (em números inteiros): ");
    scanf("%lu", &populacao_2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_2);

    densidade_populacional_2= populacao_2/area_2;
    printf("Digite a densidade populacional (hab/km²): %f", densidade_populacional_2);

    pib_percapita_1=pib_1/populacao_1;
    printf("Digite o PIB per capita:%f ", pib_percapita_1);


    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numero_pontos_turisticos_2);

    // Exibindo os valores na tela
    printf("\n ***Cartas*** \n");
    printf("Carta 1: %s | Carta 2: %s \n", codigo_da_carta_1, codigo_da_carta_2);
    printf("Estado 1: %s | Estado 2: %s \n", estado_1,estado_2 );
    printf("Cidade 1 : %s | Cidade 2: %s \n", cidade_1,cidade_2);
    printf("População 1: %lu | População 2: %lu \n", populacao_1, populacao_2);
    printf("Área 1: %.2f km² | Área 1: %.2f km²\n",area_1,area_2);
    printf("PIB 1: %.2f bilhões | PIB 2: %.2f bilhões \n", pib_1,pib_2);
    printf("Densidade Populacional 1: %.2f hab/km² |  Densidade Populacional 2: %.2f hab/km²\n", densidade_populacional_1, densidade_populacional_2);
    printf("PIB per capita 1: %.2f | PIB per capita 2: %.2f\n", pib_percapita_1,pib_percapita_2);
    printf("Número de Pontos Turísticos 1 : %d | Número de Pontos Turísticos 2 : %d\n", numero_pontos_turisticos_1,numero_pontos_turisticos_2);

    //Comparando valores 
    while(1){
        printf("Qual parametro deseja comparar:\nPO -Populaçao\nA - área\nPI - Pib\nD - Densidade populacional\nPC - Pib per capita\nN - Número de ponto turistico\nF - para acabar ");
        scanf("%s",&decisao);
        if (strcmp(decisao, "PO") == 0){
            printf("PO1 será maior que PO2: %d\n", populacao_1 > populacao_2);
        }
        else if (strcmp(decisao, "A") == 0){
            printf("A1 será maior que A2: %d\n", area_1 > area_2);
        }
        else if (strcmp(decisao, "PI") == 0){
            printf("PI1 será maior que PI2: %d\n", pib_1 > pib_2);
        }
        else if (strcmp(decisao, "D") == 0){
            printf("D1 será maior que D2: %d\n", densidade_populacional_1 > densidade_populacional_2);
        }
        else if (strcmp(decisao, "PC") == 0){
            printf("PC1 será menor que PC2: %d\n", pib_percapita_1 < pib_percapita_2);
        }
        else if (strcmp(decisao, "N") == 0){
            printf("N1 será maior que N2: %d\n", numero_pontos_turisticos_1 > numero_pontos_turisticos_2);
        }
        else if (strcmp(decisao, "F") == 0){
            printf("END GAME");
            break;
        }
        else{
            printf("Você esta digitando algo errado, tente escrever em caixa alta");
        }
        
    }
    return 0;
}
