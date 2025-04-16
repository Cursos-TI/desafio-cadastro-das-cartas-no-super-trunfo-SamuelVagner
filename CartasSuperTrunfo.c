#include <stdio.h> //biblioteca padrão de entrada e saída.
#include <string.h> //biblioteca para o uso das funções "fgets()" e "strcspn()".
#include <ctype.h> //para manipulação de caracteres como a função "toupper()".
#include <locale.h> //permite configurar o idioma e a formatação local, útil para os acentos na exibição do output.

int main() {
    setlocale(LC_ALL, ""); // Necessário à exibição de acentos no terminal.
    char Estado1, Estado2;
    char Codigo1[3], Codigo2[3];
    char Nome_cidade1[50], Nome_cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2, PIB1, PIB2;
    int Pontos_turisticos1, Pontos_turisticos2;

    // Entrada dos dados

    printf("=== Primeira Carta ===\n");
    printf("Digite a inicial do Estado da primeira carta (De A até H): ");
    scanf(" %c", &Estado1); // O espaço em " %c" serve para ignorar os espaços em branco e o quebra de linha (\n) no buffer. Entrada: "a"
    Estado1 = toupper(Estado1); // uma função que converte minúculas para maiúculas. Ex.: "a" para "A".

    printf("Digite o código da primeira carta (De 01 até 04): ");
    scanf("%s", Codigo1); // Entrada: 01\n

    getchar(); // usado para limpar o buffer "consumindo" o "\n" evitando erros com o "scanf()" ou "fgets()" que vem em seguida.
    printf("Digite o nome da cidade da primeira carta: ");
    fgets(Nome_cidade1, 50, stdin); //O "fgets" possibilitará a entrada de uma string com espaços. Entrada: "São Paulo"\n
    Nome_cidade1[strcspn(Nome_cidade1, "\n")] = 0; //serve para remover a quebra de linha "\n" que o fgets armazena.

    printf("Digite o número total da população da primeira carta: ");
    scanf("%d", &Populacao1); // Entrada: 123250000\n

    getchar();
    printf("Digite a área total da primeira carta (em km², use ponto para separar decimais): ");
    scanf("%f", &Area1); // Entrada: 1521.11\n
    while (getchar() != '\n'); // função para limpar o buffer de entrada para o próximo "scanf()".

    printf("Digite o PIB da primeira carta (em bilhões, use ponto para separar decimais): ");
    scanf("%f", &PIB1); // Entrada: 300.50\n
    while (getchar() != '\n');

    printf("Digite o total de pontos turísticos presentes no local da primeira carta: ");
    scanf("%d", &Pontos_turisticos1); // Entrada: 50\n
    getchar();

    // Repete a mesma lógica, mas para a 2ª carta.

    printf("=== Segunda Carta ===\n");
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &Estado2);
    Estado2 = toupper(Estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", Codigo2);

    getchar();
    printf("Digite o nome da cidade da segunda carta: ");
    fgets(Nome_cidade2, 50, stdin);
    Nome_cidade2[strcspn(Nome_cidade2, "\n")] = 0;

    printf("Digite o número total da população da segunda carta: ");
    scanf("%d", &Populacao2);

    getchar();
    printf("Digite a área total da segunda carta (em km², use ponto para separar decimais): ");
    scanf("%f", &Area2);
    while (getchar() != '\n');

    printf("Digite o PIB da segunda carta (em bilhões, use ponto para separar decimais): ");
    scanf("%f", &PIB2);
    while (getchar() != '\n');

    printf("Digite o total de pontos turísticos presentes no local da segunda carta: ");
    scanf("%d", &Pontos_turisticos2);
    getchar();

    // Saída dos dados

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %c%s\n", Estado1, Codigo1);
    printf("Nome da cidade: %s\n", Nome_cidade1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB1);
    printf("Pontos turísticos: %d\n", Pontos_turisticos1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2, Codigo2);
    printf("Nome da cidade: %s\n", Nome_cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", Pontos_turisticos2);

    return 0;
}
