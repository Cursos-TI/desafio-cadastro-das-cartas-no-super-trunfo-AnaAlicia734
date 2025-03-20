#include <stdio.h>

int main() {
    // Primeira Carta
    int Carta = 1;
    char estado1[50] = "Pará";
    char codigo1[50] = "A01";
    char cidade1[50] = "Belém";
    int populacao1 = 1398531;
    float Area1 = 1059.458;
    float PIB1 = 30.8;
    int Numero_de_pontos_turisticos1 = 50;

    printf("Carta: %d\n", Carta);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f mk²\n", Area1);
    printf("PIB: R$ %.2f Bilhões\n", PIB1);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos1);

    // Segunda Carta
    Carta = 2; 
    char estado2[50] = "Ceará"; 
    char codigo2[50] = "B02";
    char cidade2[50] = "Fortaleza";
    int populacao2 = 2574412; 
    float Area2 = 312.353;
    float PIB2 = 73.43;
    int Numero_de_pontos_turisticos2 = 60;

    printf("Carta: %d\n", Carta);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f mk²\n", Area2);
    printf("PIB: R$ %.2f Bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);

    return 0;
}
// Coloquei estado2, codigo2, cidade2, populacao2, Area2, PIB2 e Numero_de_pontos_turisticos2 como variáveis locais, pois são específicas da segunda carta. Pra não misturar com as variáveis da primeira carta.