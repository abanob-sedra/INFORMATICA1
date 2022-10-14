/*
file: divisione_con_resto
autore: abanob sedra
classe: 3°H
data: 05/10/2022
Restituisci il resto della divisione tra due interi 
Input: n1, n2
Elaborazione: calcolo resto
Output: resto
*/

#include <stdio.h>

int main() {
  int num1, num2; //input
  int resto;  //output
  
  printf("Inserisci il primo numero: ");  //lettura primo numero
  scanf("%d", &num1);
  
  printf("Inserisci il secondo numero: ");  //lettura secondo numero
  scanf("%d", &num2);
  
  resto = num1 % num2;  //calcolo resto divisione
  
  printf("Resto: %d", resto); //scrittura risultato
}
