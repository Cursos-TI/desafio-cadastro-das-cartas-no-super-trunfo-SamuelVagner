#include <stdio.h> //biblioteca padr�o de entrada e sa�da.
#include <string.h> //biblioteca para o uso das fun��es "fgets()" e "strcspn()".
#include <ctype.h> //para manipula��o de caracteres como a fun��o "toupper()".
#include <locale.h> //permite configurar o idioma e a formata��o local, �til para os acentos na exibi��o do output.

int main() {
    setlocale(LC_ALL, ""); // Necess�rio � exibi��o de acentos no terminal.
    char Estado1, Estado2;
    char Codigo1[3], Codigo2[3];
    char Nome_cidade1[50], Nome_cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2, PIB1, PIB2;
    int Pontos_turisticos1, Pontos_turisticos2;

    // Entrada dos dados

    printf("=== Primeira Carta ===\n");
    printf("Digite a inicial do Estado da primeira carta (De A at� H): ");
    scanf(" %c", &Estado1); // O espa�o em " %c" serve para ignorar os espa�os em branco e o quebra de linha (\n) no buffer. Entrada: "a"
    Estado1 = toupper(Estado1); // uma fun��o que converte min�culas para mai�culas. Ex.: "a" para "A".

    printf("Digite o c�digo da primeira carta (De 01 at� 04): ");
    scanf("%s", Codigo1); // Entrada: 01\n

    getchar(); // usado para limpar o buffer "consumindo" o "\n" evitando erros com o "scanf()" ou "fgets()" que vem em seguida.
    printf("Digite o nome da cidade da primeira carta: ");
    fgets(Nome_cidade1, 50, stdin); //O "fgets" possibilitar� a entrada de uma string com espa�os. Entrada: "S�o Paulo"\n
    Nome_cidade1[strcspn(Nome_cidade1, "\n")] = 0; //serve para remover a quebra de linha "\n" que o fgets armazena.

    printf("Digite o n�mero total da popula��o da primeira carta: ");
    scanf("%d", &Populacao1); // Entrada: 123250000\n

    getchar();
    printf("Digite a �rea total da primeira carta (em km�, use ponto para separar decimais): ");
    scanf("%f", &Area1); // Entrada: 1521.11\n
    while (getchar() != '\n'); // fun��o para limpar o buffer de entrada para o pr�ximo "scanf()".

    printf("Digite o PIB da primeira carta (em bilh�es, use ponto para separar decimais): ");
    scanf("%f", &PIB1); // Entrada: 300.50\n
    while (getchar() != '\n');

    printf("Digite o total de pontos tur�sticos presentes no local da primeira carta: ");
    scanf("%d", &Pontos_turisticos1); // Entrada: 50\n
    getchar();

    // Repete a mesma l�gica, mas para a 2� carta.

    printf("=== Segunda Carta ===\n");
    printf("Digite o estado da segunda carta: ");
    scanf(" %c", &Estado2);
    Estado2 = toupper(Estado2);

    printf("Digite o c�digo da segunda carta: ");
    scanf("%s", Codigo2);

    getchar();
    printf("Digite o nome da cidade da segunda carta: ");
    fgets(Nome_cidade2, 50, stdin);
    Nome_cidade2[strcspn(Nome_cidade2, "\n")] = 0;

    printf("Digite o n�mero total da popula��o da segunda carta: ");
    scanf("%d", &Populacao2);

    getchar();
    printf("Digite a �rea total da segunda carta (em km�, use ponto para separar decimais): ");
    scanf("%f", &Area2);
    while (getchar() != '\n');

    printf("Digite o PIB da segunda carta (em bilh�es, use ponto para separar decimais): ");
    scanf("%f", &PIB2);
    while (getchar() != '\n');

    printf("Digite o total de pontos tur�sticos presentes no local da segunda carta: ");
    scanf("%d", &Pontos_turisticos2);
    getchar();

    // Sa�da dos dados

    printf("Carta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("C�digo: %c%s\n", Estado1, Codigo1);
    printf("Nome da cidade: %s\n", Nome_cidade1);
    printf("Popula��o: %d habitantes\n", Populacao1);
    printf("�rea: %.2f km�\n", Area1);
    printf("PIB: R$ %.2f bilh�es de reais\n", PIB1);
    printf("Pontos tur�sticos: %d\n", Pontos_turisticos1);


    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("C�digo: %c%s\n", Estado2, Codigo2);
    printf("Nome da cidade: %s\n", Nome_cidade2);
    printf("Popula��o: %d habitantes\n", Populacao2);
    printf("�rea: %.2f km�\n", Area2);
    printf("PIB: R$ %.2f bilh�es de reais\n", PIB2);
    printf("Pontos tur�sticos: %d\n", Pontos_turisticos2);

    return 0;
}
