#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Autor Igor Gomes

int main() {
    // Definição de variáveis para cada atributo da cidade
    char estado;             // Letra do estado (A a H)
    int numeroCidade;        // Número da cidade (1 a 4)
    char nome[50];           // Nome da cidade
    float populacao;         // População da cidade
    float area;              // Área da cidade (em km²)
    float pib;               // PIB da cidade (em bilhões)
    int pontosTuristicos;    // Número de pontos turísticos
    char codigo[4];          // Código da cidade (ex: A01)
    
    // Definindo as variáveis para as cartas das duas cidades
    char estado2;
    int numeroCidade2;
    char nome2[50];
    float populacao2, area2, pib2;
    int pontosTuristicos2;
    char codigo2[4];

    // Cadastro da primeira cidade
    printf("Cadastro da Carta de Cidade 1\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado);
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &numeroCidade);
    sprintf(codigo, "%c%02d", estado, numeroCidade);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome);
    printf("População (em habitantes): ");
    scanf("%f", &populacao);
    printf("Área (em km²) e PIB (em bilhões) separados por espaço: ");
    scanf("%f %f", &area, &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Cadastro da segunda cidade
    printf("\nCadastro da Carta de Cidade 2\n");

    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o número da cidade (1 a 4): ");
    scanf("%d", &numeroCidade2);
    sprintf(codigo2, "%c%02d", estado2, numeroCidade2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População (em habitantes): ");
    scanf("%f", &populacao2);
    printf("Área (em km²) e PIB (em bilhões) separados por espaço: ");
    scanf("%f %f", &area2, &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados das Cartas
    printf("\n--- Dados da Carta de Cidade 1 ---\n");
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %.3f habitantes\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.3f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    printf("\n--- Dados da Carta de Cidade 2 ---\n");
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %.3f habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparação entre as cidades
    char vencedor[50];
    float vPopulacao, vArea, vPib;
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    int escolha;
    scanf("%d", &escolha);

    // Comparação do atributo escolhido
    if (escolha == 1) {
        if (populacao < populacao2) {
            printf("Cidade 1 venceu em população.\n");
        } else if (populacao2 < populacao) {
            printf("Cidade 2 venceu em população.\n");
        } else {
            printf("As cidades têm a mesma população.\n");
        }
    } else if (escolha == 2) {
        if (area > area2) {
            printf("Cidade 1 venceu em área.\n");
        } else if (area < area2) {
            printf("Cidade 2 venceu em área.\n");
        } else {
            printf("As cidades têm a mesma área.\n");
        }
    } else if (escolha == 3) {
        if (pib > pib2) {
            printf("Cidade 1 venceu em PIB.\n");
        } else if (pib < pib2) {
            printf("Cidade 2 venceu em PIB.\n");
        } else {
            printf("As cidades têm o mesmo PIB.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
