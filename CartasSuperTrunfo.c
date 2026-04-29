#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

    char carta;
    char estado;
    char codigo[2];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;


  // Área para entrada de dados

    printf("digite uma letra de 'A a H' para o estado: ");
    scanf(" %c", &estado);
    
    printf("Digite o codigo: ");
    scanf("%s", &codigo);


  // Área para exibição dos dados da cidade

      printf("\nestado: %c", estado);
      printf("\ncodigo: %c%s\n",estado,codigo);
  


return 0;
} 
