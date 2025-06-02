#include <stdio.h>

int main() {
    // Primeira Carta
    int Carta1 = 1;
    char estado1[50] = "Pará";
    char codigo1[50] = "A01";
    char cidade1[50] = "Belém";
    unsigned long int populacao1 = 1398531; 
    float Area1 = 1059.458; // Área em km²
    float PIB1 = 30.8; // PIB em bilhões de reais
    int Numero_de_pontos_turisticos1 = 50;
    float densidade_populacional1 = populacao1 / Area1; // pessoas por km²
    float PIB_per_capita1 = (PIB1 * 1000000000) / populacao1; // PIB per capita em reais
    float Area_media_por_pessoa = (Area1 / (float)populacao1) * 1000; // inverso da densidade populacional, km² por pessoa
    // Cálculo do super poder
    // O super poder é uma soma dos atributos da carta
    float super_poder1 = populacao1 + Area1 + PIB1 + Numero_de_pontos_turisticos1 + densidade_populacional1 + PIB_per_capita1 + Area_media_por_pessoa;

    printf("Carta: %d\n", Carta1);
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: R$ %.2f Bilhões\n", PIB1);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos1);
    printf("Densidade populacional: %2f\n hab/km²", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita1);
    printf("Área média por pessoa: %.3f km² por pessoa\n", Area_media_por_pessoa);
    printf("Super Poder: %.2f\n", super_poder1);
    
    // Segunda Carta
    int Carta2 = 2; 
    char estado2[50] = "Ceará"; 
    char codigo2[50] = "B02";
    char cidade2[50] = "Fortaleza";
    unsigned long int populacao2 = 2574412; 
    float Area2 = 312.353;
    float PIB2 = 73.43;
    int Numero_de_pontos_turisticos2 = 60;
    float densidade_populacional2 = populacao2 / Area2;
    float PIB_per_capita2 = (PIB2 * 1000000)/ populacao2; 
    float Area_media_por_pessoa2 = (Area2 / (float) populacao2) * 1000;
    float super_poder2 = populacao2 + Area2 + PIB2 + Numero_de_pontos_turisticos2 + densidade_populacional2 + PIB_per_capita2 + Area_media_por_pessoa2;

    printf("Carta: %d\n", Carta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f Bilhões\n", PIB2);
    printf("Número de pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", PIB_per_capita2);
    printf("Área média por pessoa: %.3f km² por pessoa\n", Area_media_por_pessoa2);
    printf("Super Poder: %.2f\n", super_poder2);

/*Coloquei estado2, codigo2, cidade2, populacao2, Area2, PIB2 e Numero_de_pontos_turisticos2 
como variáveis locais, pois são específicas da segunda carta, pra não misturar com as variáveis 
da primeira carta.*/

// Definição das variáveis das cartas
 printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (Area1 > Area2) ? 1 : 2, (Area1 > Area2));
    printf("PIB: Carta %d venceu (%d)\n", (PIB1 > PIB2) ? 1 : 2, (PIB1 > PIB2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2) ? 1 : 2, (Numero_de_pontos_turisticos1 > Numero_de_pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2)); // Menor valor vence
    printf("PIB per Capita: Carta %d venceu (%d)\n", (PIB_per_capita1 > PIB_per_capita2) ? 1 : 2, (PIB_per_capita1 > PIB_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return (0);
}
