#include <stdio.h>

// Função para comparar dois atributos e determinar a cidade vencedora
void compararAtributos(char nome1[], char nome2[], float valor1, float valor2, char atributo[]) {
    printf("\nComparação de %s:\n", atributo);
    (valor1 > valor2) ? printf("%s venceu em %s.\n", nome1, atributo) :
    (valor1 < valor2) ? printf("%s venceu em %s.\n", nome2, atributo) :
    printf("Empate em %s.\n", atributo);
}

int main() {
    // Variáveis para a Cidade 1
    char nome1[50];
    float populacao1, area1, pib1;
    int pontosTuristicos1;
    
    // Variáveis para a Cidade 2
    char nome2[50];
    float populacao2, area2, pib2;
    int pontosTuristicos2;

    // Cadastro da Cidade 1
    printf("Cadastro da Cidade 1\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População (em habitantes): ");
    scanf("%f", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Cidade 2
    printf("\nCadastro da Cidade 2\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População (em habitantes): ");
    scanf("%f", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    // Menu Dinâmico
    int escolha1, escolha2;
    printf("\nEscolha dois atributos para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha2);
    
    // Comparação dos dois atributos escolhidos
    if (escolha1 == escolha2) {
        printf("\nOs dois atributos escolhidos são iguais. Escolha atributos diferentes.\n");
        return 1;
    }
    
    printf("\nResultados da Comparação:\n");
    
    switch (escolha1) {
        case 1: compararAtributos(nome1, nome2, populacao1, populacao2, "População"); break;
        case 2: compararAtributos(nome1, nome2, area1, area2, "Área"); break;
        case 3: compararAtributos(nome1, nome2, pib1, pib2, "PIB"); break;
        case 4: compararAtributos(nome1, nome2, pontosTuristicos1, pontosTuristicos2, "Pontos Turísticos"); break;
        default: printf("Opção inválida.\n"); return 1;
    }
    
    switch (escolha2) {
        case 1: compararAtributos(nome1, nome2, populacao1, populacao2, "População"); break;
        case 2: compararAtributos(nome1, nome2, area1, area2, "Área"); break;
        case 3: compararAtributos(nome1, nome2, pib1, pib2, "PIB"); break;
        case 4: compararAtributos(nome1, nome2, pontosTuristicos1, pontosTuristicos2, "Pontos Turísticos"); break;
        default: printf("Opção inválida.\n"); return 1;
    }

    return 0;
}
