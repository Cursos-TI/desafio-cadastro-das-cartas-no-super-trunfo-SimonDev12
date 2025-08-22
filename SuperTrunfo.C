#include <stdio.h>

int main(){
printf("Desafio de cartas Super Trunfo.\n");
printf("Desenvolvimento para trabalho da faculdade.\n");
printf("Versão 0.1\n");

//Declaração de variáveis para a primeira carta.
char estado1, codigo1[20], cidade1[25];
int populacao1, ponto_turistios1;
float area1, pib1;

//Declaração de variáveis para a segunda carta.
char estado2, codigo2[20], cidade2[25];
int populacao2, ponto_turisticos2;
float area2, pib2;

//Cadastro da primeira carta
printf("=====   CADASTRO DA PRIMEIRA CARTA  =====\n");

printf("Digite o estado (A-H):");
scanf("%c", &estado1);

printf("Digite o codigo:");
scanf("%s", codigo1);

printf("Digite o nome da cidade:");
scanf("%s", cidade1);

printf("Digite a população;");
scanf("%d", &populacao1);

printf("Digite o ponto turísticos:");
scanf("%d", &ponto_turistios1);

printf("Digite a área da cidade(Em Km²):");
scanf("%f", &area1);

printf("Digite o PIB:");
scanf("%f", &pib1);

//Cadastro da segunda carta
printf("=====   CADASTRO DA SEGUNDA CARTA   =====\n");

printf("Digite o estado (A-H):");
scanf("%c", &estado2);

printf("Digite o codigo:");
scanf("%s", codigo2);

printf("Digite o nome da cidade:");
scanf("%s", cidade2);

printf("Digite a população:");
scanf("%d", &populacao2);

printf("Digite o ponto turístiocos:");
scanf("%d", &ponto_turisticos2);

printf("Digite a área da cidade(Em Km²):");
scanf("%f", &area2);

printf("Digite o PIB:");
scanf("%f", &pib2);

//Exibição das informações da primeira carta
printf("=== Carta 01 ===\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Ponto Turísticos: %d\n", ponto_turistios1);
printf("Área: %f\n", area1);
printf("PIB: %f\n", pib1);

//Exibição das informações da segunda carta
printf("=== Carta 02 ===\n");
printf("Estado: %c\n", estado2);
printf("Codigo: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Ponto Turísticos: %d\n", ponto_turisticos2);
printf("Área: %f\n", area2);
printf("PIB: %f\n", pib2);

return 0;

}