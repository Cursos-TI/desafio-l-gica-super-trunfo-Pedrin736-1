#include <stdio.h>

  int main(){

// variaveis carta1
char estado = "Bahia" [10]; //Bahia
char codigo = "A01" [7]; //A01
char nomeCidade = "Salvador" [50]; //Salvador
int populacao = 200000; //200000 
float areaTotal = 2000.000;
float pib1 = 5000.0000;
int pontos_turisticos1 = 50; // 50
int c;
 
 // variaveis carta 2
 char estado2 = "Riodejaneiro" [15]; //Riodejaneiro
 char codigo2 = "B02" [7]; // B02
 char nomeCidade2 = "Queimados" [20]; // Queimados
 int populacao2 = 4000; // 40000
 float areaTotal2 = 20.000;
 float pib2 = 500.000;
 int  pontos_turisticos2 = 23; // 23
 
    
    // Calculo de densidade Populacional e PIB per capita
  
    float densidade1 = populacao/ areaTotal;
    float densidade = populacao2 / areaTotal2;

    float pib_per_capita1 = pib1 / populacao;
    float pib_per_capita2 = pib2 /  populacao2;

   // Atributo para comparacao (numero_habitantes)

    float pib;
    int valor1 = 5000.0000;
    int valor2 = 500.000; 

    //Dados da carta
    
    printf("Comparação das cartas: %s pib %f:\n");
    printf("Carta1 - %s (%s) %d\n", "nome1, estado1, valor1");
    printf("Carta2 - %s (%s) %d\n", "nome2, estado2, valor2");

    if(valor1 > valor2){
      printf("Resultado: Carta1 (%s) venceu!\n", "Bahia");

      }else if( valor2 > valor1){
      printf("Resultado: Carta2 (%s) venceu!\n", "Riodejaneiro");
 
    }else{
      printf("Resultado: Empate!\n"); 
    }
  
  }
  
   