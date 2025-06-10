#include <stdio.h>

  int main(){

// variaveis carta1
char estado = Bahia [10]; //Bahia
char codigo = A01 [7]; //A01
char nomeCidade = Salvador [50]; //Salvador
int numero_habitantes = 200000; //200000 
float areaTotal = 2.000.000km²;
float pib1 = 50.000.000;
int pontos_turisticos1 = 50; // 50
 
 // variaveis carta 2
char estado2 = Riodejaneiro [15]; //Riodejaneiro
 char codigo2 = B02 [7]; // B02
 char nomeCidade2 = Queimados [20]; // Queimados
 int numero_habitantes2 = 4000; // 40000
 float areaTotal2, = 20.000;
 float pib2 = 500.000;
 int  pontos_turisticos2 = 23; // 23
    
    // Calculo de densidade Populacional e PIB per capita
  
    float densidade1 = populacao1 / area1;
    float densidade = populacao2 / area2;

    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita = pib2 /  populacao2;

   // Atributo para comparacao (numero_habitantes)
   
    int numero_habitantes [50]
    int valor1 = 200000;
    int valor2 = 4000; 

    //Dados da carta
    
    printf("Comparação das cartas: %s (Numero_habitantes %d):\n", numero_habitantes);
    printf("Carta - %s (%s) %d\n", nome1, estado1, valor1);
    printf("Carta - %s (%s) %d\n", nome2, estado2, valor2);

    if(valor1 > valor2){
      printf("Resultado: Carta1 (%s) venceu!\n", Bahia);

    }else{ 
      printf("Resultado: Carta2 (%s) venceu!\n", Riodejaneiro);
 
    }else{
      printf("Resultado: Empate!\n"); 
    }
  
  }
  
   