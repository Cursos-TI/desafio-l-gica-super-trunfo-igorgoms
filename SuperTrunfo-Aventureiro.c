#include <stdio.h>

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

    // Exibição dos Dados das Cidades
    printf("\n--- Dados da Cidade 1 ---\n");
    printf("Nome: %s\n", nome1);
    printf("População: %.3f habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Dados da Cidade 2 ---\n");
    printf("Nome: %s\n", nome2);
    printf("População: %.3f habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Menu Interativo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    int escolha;
    scanf("%d", &escolha);

    // Comparação Aninhada
    switch (escolha) {
        case 1: // Comparação por População
            if (populacao1 > populacao2) {
                printf("\nCidade 1 venceu em população.\n");
            } else if (populacao1 < populacao2) {
                printf("\nCidade 2 venceu em população.\n");
            } else {
                printf("\nEmpate em população. Comparando por área...\n");
                if (area1 > area2) {
                    printf("Cidade 1 venceu em área.\n");
                } else if (area1 < area2) {
                    printf("Cidade 2 venceu em área.\n");
                } else {
                    printf("Empate em área. Comparando por PIB...\n");
                    if (pib1 > pib2) {
                        printf("Cidade 1 venceu em PIB.\n");
                    } else if (pib1 < pib2) {
                        printf("Cidade 2 venceu em PIB.\n");
                    } else {
                        printf("Empate em PIB. Comparando por pontos turísticos...\n");
                        if (pontosTuristicos1 > pontosTuristicos2) {
                            printf("Cidade 1 venceu em pontos turísticos.\n");
                        } else if (pontosTuristicos1 < pontosTuristicos2) {
                            printf("Cidade 2 venceu em pontos turísticos.\n");
                        } else {
                            printf("Empate em todos os atributos.\n");
                        }
                    }
                }
            }
            break;

        case 2: // Comparação por Área
            if (area1 > area2) {
                printf("\nCidade 1 venceu em área.\n");
            } else if (area1 < area2) {
                printf("\nCidade 2 venceu em área.\n");
            } else {
                printf("\nEmpate em área. Comparando por população...\n");
                if (populacao1 > populacao2) {
                    printf("Cidade 1 venceu em população.\n");
                } else if (populacao1 < populacao2) {
                    printf("Cidade 2 venceu em população.\n");
                } else {
                    printf("Empate em população. Comparando por PIB...\n");
                    if (pib1 > pib2) {
                        printf("Cidade 1 venceu em PIB.\n");
                    } else if (pib1 < pib2) {
                        printf("Cidade 2 venceu em PIB.\n");
                    } else {
                        printf("Empate em PIB. Comparando por pontos turísticos...\n");
                        if (pontosTuristicos1 > pontosTuristicos2) {
                            printf("Cidade 1 venceu em pontos turísticos.\n");
                        } else if (pontosTuristicos1 < pontosTuristicos2) {
                            printf("Cidade 2 venceu em pontos turísticos.\n");
                        } else {
                            printf("Empate em todos os atributos.\n");
                        }
                    }
                }
            }
            break;

        case 3: // Comparação por PIB
            if (pib1 > pib2) {
                printf("\nCidade 1 venceu em PIB.\n");
            } else if (pib1 < pib2) {
                printf("\nCidade 2 venceu em PIB.\n");
            } else {
                printf("\nEmpate em PIB. Comparando por população...\n");
                if (populacao1 > populacao2) {
                    printf("Cidade 1 venceu em população.\n");
                } else if (populacao1 < populacao2) {
                    printf("Cidade 2 venceu em população.\n");
                } else {
                    printf("Empate em população. Comparando por área...\n");
                    if (area1 > area2) {
                        printf("Cidade 1 venceu em área.\n");
                    } else if (area1 < area2) {
                        printf("Cidade 2 venceu em área.\n");
                    } else {
                        printf("Empate em área. Comparando por pontos turísticos...\n");
                        if (pontosTuristicos1 > pontosTuristicos2) {
                            printf("Cidade 1 venceu em pontos turísticos.\n");
                        } else if (pontosTuristicos1 < pontosTuristicos2) {
                            printf("Cidade 2 venceu em pontos turísticos.\n");
                        } else {
                            printf("Empate em todos os atributos.\n");
                        }
                    }
                }
            }
            break;

        case 4: // Comparação por Pontos Turísticos
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nCidade 1 venceu em pontos turísticos.\n");
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("\nCidade 2 venceu em pontos turísticos.\n");
            } else {
                printf("\nEmpate em pontos turísticos. Comparando por população...\n");
                if (populacao1 > populacao2) {
                    printf("Cidade 1 venceu em população.\n");
                } else if (populacao1 < populacao2) {
                    printf("Cidade 2 venceu em população.\n");
                } else {
                    printf("Empate em população. Comparando por área...\n");
                    if (area1 > area2) {
                        printf("Cidade 1 venceu em área.\n");
                    } else if (area1 < area2) {
                        printf("Cidade 2 venceu em área.\n");
                    } else {
                        printf("Empate em área. Comparando por PIB...\n");
                        if (pib1 > pib2) {
                            printf("Cidade 1 venceu em PIB.\n");
                        } else if (pib1 < pib2) {
                            printf("Cidade 2 venceu em PIB.\n");
                        } else {
                            printf("Empate em todos os atributos.\n");
                        }
                    }
                }
            }
            break;

        default:
            printf("\nOpção inválida.\n");
    }

    return 0;
}